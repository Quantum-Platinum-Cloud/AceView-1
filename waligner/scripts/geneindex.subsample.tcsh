#!bin/tcsh -f

set phase=$1
set uu=$2
set kk=$3

if (x$uu != xu && x$uu != xnu) then
  echo "missing second  parameter  u or nu"
  goto done
endif
  
set kks="10k 20k 50k 100k 200k 500k 1M 2M 5M 10M 20M 50M 100M 0k"

if ($phase == run) then
  if  ($uu == u) set UU=unique
  if  ($uu == nu) set UU=quasi_unique

    bin/geneindex -deepGene tmp/GENEINDEX/$MAGIC.av.GENE.$uu.ace -$uu -mask tmp/GENEINDEX/$MAGIC.av.$uu.mask  -runList MetaDB/$MAGIC/GroupsRunsListSorted -runAce tmp/GENEINDEX/$MAGIC.av.GENE.info.ace  -o  tmp/GENEINDEX/Results/$MAGIC.$kk.AceView.GENE.$uu -gzo  -pA -method Gene_AceView     -stableGenes TARGET/Targets/hs.av.stable_genes.txt -referenceGenome GRCh37.p10__NCBI_37_5__ANNOTATION_RELEASE.104__2013_02_01  -target_class ET_av -geneGroup TARGET/GENES/Gene_groups.ace  -exportDiffGenes  -compare -correlation    -htmlSpecies hs   -export abitvz -subsample $kk
    touch RESULTS/Expression.$kk/$UU/av/run.done

  goto done

endif

#############################################################################

if ($phase == compute) then
  if  ($uu == u) set UU=unique
  if  ($uu == nu) set UU=quasi_unique

  foreach kk ($kks)
      if (-e RESULTS/Expression.$kk/$UU/av/run.done) continue
      if (! -d RESULTS/Expression.$kk) mkdir  RESULTS/Expression.$kk
      if (! -d RESULTS/Expression.$kk/$UU) mkdir  RESULTS/Expression.$kk/$UU
      if (-d RESULTS/Expression.$kk/$UU/av) \rm -rf  RESULTS/Expression.$kk/$UU/av
      mkdir  RESULTS/Expression.$kk/$UU/av

    scripts/submit tmp/GENEINDEX/Results/EXpresson.$kk/$MAGIC.$myUU  "scripts/geneindex.subsample.tcsh run $uu $kk"
  end

  goto done
endif

#############################################################################

if ($phase == transfer) then
  foreach uu (u nu)
    if  ($uu == u) set UU=unique
    if  ($uu == nu) set UU=quasi_unique
    foreach kk ($kks)
      if (! -e RESULTS/Expression.$kk/$UU/av/run.done) continue
      if (-e RESULTS/Expression.$kk/$UU/av/transfer.done) continue
      \rm -rf  RESULTS/Expression.$kk/$UU/av
      mkdir  RESULTS/Expression.$kk/$UU/av
      \cp tmp/GENEINDEX/Results/$MAGIC.$kk.AceView.GENE.$uu.*.profiles.txt RESULTS/Expression.$kk/$UU/av
      touch RESULTS/Expression.$kk/$UU/av/run.done
      touch RESULTS/Expression.$kk/$UU/av/transfer.done
    end
  end
  goto done
endif

#############################################################################

if ($phase == report) then
    if  ($uu == u) set UU=unique
    if  ($uu == nu) set UU=quasi_unique
  echo "report uu=$uu UU=$UU"
  foreach kk ($kks)
    if (! -e RESULTS/Expression.$kk/$UU/av/transfer.done) continue
    if (-e RESULTS/Expression.$kk/$UU/av/report.done) continue
    scripts/geneindex.subsample.tcsh reportOne $uu $kk 
  end
  goto done
endif

#############################################################################

if ($phase == reportOne) then
    if  ($uu == u) set UU=unique
    if  ($uu == nu) set UU=quasi_unique

  set totog=RESULTS/Expression.0k/unique/av/gene_truth.list.0k
  touch $totog

  if (-e RESULTS/Expression.$kk/$UU/av/report.done2) goto done
  set Expression=Expression.$kk

  set ln=geneBox_length
  set ln=mRNA_length
  set toto=RESULTS/$Expression/$UU/av/AECDB_diff.$kk.GENE.$ln.DEG.$uu.stats.txt
  echo -n "### $toto : subsampling $kk " > $toto
  date >> $toto

  set cap=A1A2I2I3R1R2
  set totocap=RESULTS/$Expression/$UU/av/AECDB_diff.GENE.$cap.$ln.DEG.$uu.profile.stats.txt
  echo -n "### $toto$cap : subsampling $kk $cap " > $totocap
  date >> $totocap

  foreach comp (RNA_Total_ACB RNA_PolyA_ACB AGLR1_AECDB AGLR2_AECDB ROCR1_AECDB ROCR2_AECDB ILMR1_AECDB ILMR2_AECDB ILMR2_lowQ_AECDB ILMR3_AECDB Nanopore.titr_AGLR2_ACB PacBio2.titr.ccs3_AGLR2_ACB Nanopore.titr_ROCR3_ACB PacBio2.titr.ccs3_ROCR3_ACB BSPR1_AECDB )
    foreach ff (`ls  RESULTS/$Expression/$UU/av/AECDB_diff.$kk.AceView.GENE.$uu.$comp'_Profile'.score.genes.profiles.txt`)
      cat $ff | head -1 >> $toto
      cat $ff | tail -6 >> $toto
    end

    if (-e RESULTS/$Expression/$UU/av/AECDB_diff.$kk.AceView.GENE.$cap.$uu.AGLR1_AECDB_Profile.score.genes.profiles.txt) then 
      foreach ff (`ls  RESULTS/$Expression/$UU/av/AECDB_diff.$kk.AceView.GENE.$cap.$uu.$comp'_Profile'.score.genes.profiles.txt`)
        cat $ff | head -1 >> $toto$cap
        cat $ff | tail -6 >> $toto$cap
      end
    endif
  end

  set ln=mRNA_length
  set toto=RESULTS/$Expression/$UU/av/AECDB_diff.$kk.GENE.$ln.DEG.$uu.heatmap.txt
  echo -n "### $toto :" > $toto
  date >> $toto



# grep index min/max et fold change
  cat RESULTS/$Expression/$UU/av/AECDB_diff.$kk.AceView.GENE.$uu.RNA_Total_ACB_Profile.score.genes.profiles.txt | gawk -F '\t' '/^#/{next;}{printf("LnMiMxFc\t%s\t%s\t%s\t%s\t%s\n",$2,$3,$41,$42,$40);}' > $toto.0

  date > $toto.1
  date > $toto.2

  foreach comp (AGLR1_AECDB AGLR2_AECDB BSPR1_AECDB ROCR1_AECDB ROCR2_AECDB ILMR1_AECDB ILMR2_AECDB ILMR2_lowQ_AECDB ILMR3_AECDB)
    foreach ff (`ls  RESULTS/$Expression/$UU/av/AECDB_diff.$kk.AceView.GENE.$uu.$comp'_Profile'.score.genes.profiles.txt`)
      cat $ff | gawk -F '\t' '{printf("%s\t%s\t%s\t%s\t%s\t%s\n",ff,$2,$3,$5,$45,$46);}' ff=$ff | grep AECDB_Profile | sed -e "s/RESULTS\/$Expression\/$UU\/av\/AECDB_diff.$kk.AceView.GENE.$uu.//" -e 's/_AECDB_Profile.score.genes.profiles.txt//' >> $toto.1
    end
  end

  foreach comp (RNA_Total_ACB RNA_PolyA_ACB Nanopore.titr_AGLR2_ACB PacBio2.titr.ccs3_AGLR2_ACB Nanopore.titr_ROCR3_ACB PacBio2.titr.ccs3_ROCR3_ACB)
    foreach ff (`ls  RESULTS/$Expression/$UU/av/AECDB_diff.$kk.AceView.GENE.$uu.$comp'_Profile'.score.genes.profiles.txt`)
      cat $ff | gawk -F '\t' '{printf("%s\t%s\t%s\t%s\t%s\t%s\n",ff,$2,$3,$5,$29,$30);}' ff=$ff | grep ACB_Profile | sed -e "s/RESULTS\/$Expression\/$UU\/av\/AECDB_diff.$kk.AceView.GENE.$uu.//" -e 's/_ACB_Profile.score.genes.profiles.txt//' >> $toto.2
    end
  end

  cat $totog $toto.[012] |  gawk -F '\t' -f scripts/deg_capture_heatmap.awk outf=RESULTS/$Expression/$UU/av/AECDB_diff    > $toto.3
  cat $toto.3 | head -8 | gawk '/^#/{print}' >> $toto
  cat $toto.3 | gawk '/^#/{next;}{print}' | sort -k 7,7 -k 1,1  >> $toto
  #\rm $toto.[0123]
  ls -ls $toto.[0123]

  set toto2=RESULTS/$Expression/$UU/av/AECDB_diff.$kk.GENE.$ln.DEG.$uu.heatmap.A2R2I3.txt
  echo -n "### $toto2 :" > $toto2
  date >> $toto2

  cat $toto | gawk '/^###/{next;}/^#/{print;next;}{c=$3;if(index(c,"A2")*index(c,"R2")*index(c,"I3")>0)print;}' >> $toto2


  set toto2=RESULTS/$Expression/$UU/av/AECDB_diff.$kk.GENE.$ln.DEG.$uu.heatmap.A1A2I2I3R1R2.txt
  echo -n "### $toto2 :" > $toto2
  date >> $toto2

  cat $toto | gawk '/^###/{next;}/^#/{print;next;}{c=$3;if(index(c,"A1")*index(c,"A2")*index(c,"I2")*index(c,"I3")*index(c,"R1")*index(c,"R2")>0)print;}' >> $toto2

ls -ls $toto
wc $toto
goto done
 

  echo $toto.done
  touch RESULTS/Expression.$kk/$UU/av/report.done
  goto done
endif

#############################################################################

if ($phase == cumul) then
    if  ($uu == u) set UU=unique
    if  ($uu == nu) set UU=quasi_unique

  # establish the truth list
  set totog=RESULTS/Expression.0k/unique/av/gene_truth.list
    if (! -e $totog.ZZ) then
      cat RESULTS/Expression.0k/unique/av/AECDB_diff.0k.GENE.mRNA_length.DEG.u.heatmap.txt | gawk -F '\t' '{printf("Truth\t%s\t%s\n",$1,$7);}' > $totog.0k
    endif

    set toto=RESULTS/Expression.0k/deg_truth_per_depth.txt
    echo $toto > toto.1
    echo -n "### $toto : " > $toto
    date >> $toto
    set k=0
    foreach kk ($kks)
      set k=`echo $k | gawk '{print $1+1;}'`
      cat RESULTS/Expression.$kk/$UU/av/AECDB_diff.deg_truth.txt | gawk -F '\t' '/^##/{next;}/^#/{for(i=2;i<= NF;i++){tt[i]=$i;}nf=NF;jj=0;next;}{jj++;for(i=2;i<=nf;i++)printf("%d\t%d\t%d\t%s\t%s\t%s\t%d\n",jj,i,k,tt[i],$1,kk,0+$i);}' k=$k kk=$kk >> toto.1
    end
    cat toto.1 | sort -k 1,1n -k 2,2n -k 3,3n > toto.2
    cat toto.2 | gawk -F '\t' '{i=$1;j=$2;k=$3;a[i]=$5;b[j]=$4;kk[k]=$6;z[i,j,k]=$7;if(i+0>iMax)iMax=i;if(j+0>jMax)jMax=j;if(k+0>kMax)kMax=k;}END{for (i=1;i<=iMax;i++){printf("\n\n##%s\tRun",a[i]);for(k2=1;k2<=kMax;k2++)printf("\t%s",kk[k2]);for (j=1;j<=jMax;j++){printf("\n%s\t%s",a[i],b[j]);for(k=1;k<=kMax;k++)printf("\t%d",0+z[i,j,k]);}}printf("\n");}' >> $toto
    #\rm toto.[12]
    


  goto done
endif

#############################################################################

done:
    echo -n "Done "
    date

#############################################################################
#############################################################################