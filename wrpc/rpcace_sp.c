/*  File: rpcace_sp.c
 *  Author: Jean Thierry-Mieg (mieg@kaa.cnrs_mop.fr)
 *  Copyright (C) J Thierry-Mieg and R Durbin, 1994
 *-------------------------------------------------------------------
 * This file is part of the ACEDB genome database package, written by
 * 	Richard Durbin (MRC LMB, UK) rd@mrc-lmba.cam.ac.uk, and
 *	Jean Thierry-Mieg (CRBM du CNRS, France) mieg@kaa.cnrs-mop.fr
 *
 * Description:
 * Exported functions:
 * HISTORY:
     from a first version by Peter Kocab
     edited by Bigwood & Co
 * Last edited: Jan 10 16:13 1996 (mieg)
 * Created: Fri Nov 18 16:42:20 1994 (mieg)
 *-------------------------------------------------------------------
 */

/* $Id: rpcace_sp.c,v 1.7 2016/09/01 17:39:48 mieg Exp $ */

/* 
 * RPC_SVC_FG prevent forking on solaris
 * affects rpcace_svc.c which is generated by rpcgen during make

 */
#define RPC_SVC_FG
 

#if defined (ALPHA ) || defined(HP)
#include <stdlib.h>
#include <string.h> /* needed to compile with cc on the alpha - srk */
#endif
#include <rpc/rpc.h>
#include <unistd.h>
unsigned long  rpc_port;

/* before including rpcace_svc.c i have to refddefine the 3 guys
so that i can set them to zero if i am a daemon
*/

static int
 my_RPC_ANYSOCK = RPC_ANYSOCK,
  my_IPPROTO_TCP = IPPROTO_TCP,
  my_IPPROTO_UDP = IPPROTO_UDP ;

#undef IPPROTO_UDP
#undef  IPPROTO_TCP
#undef RPC_ANYSOCK
#define  RPC_ANYSOCK  my_RPC_ANYSOCK
#define IPPROTO_TCP my_IPPROTO_TCP
#define IPPROTO_UDP my_IPPROTO_UDP


#define main     my_run_rpc
void messerror (const char *format, ...) ;
#include "rpcace_svc.c"
#undef  main

#include "acedb.h"   /* must come after rpcace_svc.c */

void  wait_for_client (u_long port, BOOL isDaemon)
{ rpc_port = port ;
  if (isDaemon)
    { my_RPC_ANYSOCK = 0;
       my_IPPROTO_TCP =  my_IPPROTO_UDP = 0 ;
    }
  if (0) messerror ("wait_for_client: m1") ;
  my_run_rpc(0,0) ;
  if (0) messerror ("wait_for_client: m2") ;
}

void closePortMap(void) {
 svc_unregister(RPC_ACE,RPC_ACE_VERS);
}

/*
** Remote version for "ace_server"
*/

extern Stack processQueries (int *ip, int *magicp, char *cp, int maxBytes, int *enc) ; 

#if defined(LINUX) || defined (ALPHA_LINUX) || defined (OPTERON) || defined(MAC_X)
ace_reponse *ace_server_1_svc (ace_data *question, struct svc_req *rqstp)
#else
ace_reponse *ace_server_1 (ace_data *question, struct svc_req *rqstp)
#endif
{ int nn ;
  Stack s ;
  static ace_reponse rr ; 
  int clientId = question->clientId ;
  int magic = question->magic ;
  char *cp ;
  int maxBytes = question->kBytes * 1024; 
  int encore = 0; 

  if (0) messerror ("processQueries: m1 q=%s", question && question->question ? question->question : "") ;
  /* free previous result */
  xdr_free((xdrproc_t )xdr_ace_reponse, (char*)&rr) ;
  memset (&rr,0, sizeof(ace_reponse)) ;
  encore = - question->encore ;  /* sign is inverted to allow overloading */
  s = processQueries (&clientId, &magic, question->question, maxBytes, &encore) ; 

  /*
  * we want stackMark() - 1 because Stack always includes an extra
  * '\0' at the end that you didn't ask for.  This messes up binary
  * output because spurious 00 bytes appear in your data.
  */
  nn = s && stackMark(s) ? stackMark(s) - 1 : 100 ;
   /* stackMrk == 0 happens if we write to a file and are in the encore case */


  cp = malloc (nn + 1) ; 
  if (cp)
    { memset(cp, 0, nn+1) ;
      if (s &&  stackMark(s))
	memcpy (cp, stackText(s,0), nn) ;
      else 
	{ 
	  if (!s)
	    strcpy(cp,"// Sorry, broken connection, possibly due to client time out") ;
	   nn = strlen (cp) ;
	}
    }
  else
     { cp = malloc(300) ;
       sprintf(cp, "%s%d%s\n%s\n",
	       "//! Sorry, the answer is too long (",stackMark (s)," kilobytes),",
	       "//! I can t mallocate a sufficcient buffer." ) ;
       nn = strlen (cp) ;
    }

  rr.ace_reponse_u.res_data.clientId = clientId ;
  rr.ace_reponse_u.res_data.magic = magic ;
  rr.ace_reponse_u.res_data.reponse.reponse_val = cp ;
  rr.ace_reponse_u.res_data.reponse.reponse_len = nn ;
  rr.ace_reponse_u.res_data.question = malloc(5) ; *rr.ace_reponse_u.res_data.question = 0 ;
  rr.ace_reponse_u.res_data.encore = encore; /* DWB - let client know if you have more */
  return &rr ;
}

/********* end of file ********/

