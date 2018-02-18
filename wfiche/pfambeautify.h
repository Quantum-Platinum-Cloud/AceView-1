typedef struct {char *old, *new; } PFB ;

static PFB pfamBeautify[] = {
{ "7TM chemoreceptor" , "7 transmembrane chemoreceptor family member"},
{ "ABC transporter, transmembrane region and ABC transporter" , "ABC transporter"},
{ "Protein kinase domain containing protein" , "protein kinase"},
{ "f-box domain containing protein" , "F-box domain containing protein"},
{ "F-box domain and Domain DUF38" , "fog-2 homology domain containing family member"},
{ "nematode cuticle collagen N-terminal domain and Collagen triple helix repeat (20 copies)" , "cuticle collagen"},
{ "7 transmembrane receptor (rhodopsin family)" , "7 transmembrane receptor, rhodopsin-type family member"},
{ "zinc finger, C4 type (two domains) and Ligand-binding domain of nuclear hormone receptor" , "nuclear receptor family member"},
{ "zn-finger, C4 type (two domains) and Ligand-binding domain of nuclear hormone receptor" , "nuclear receptor family member"},
{ "Zinc finger, C4 type  and Ligand-binding domain of nuclear hormone receptor" , "nuclear receptor family member"},
{ "Zn-finger, C4 type  and Ligand-binding domain of nuclear hormone receptor" , "nuclear receptor family member"},
{ "Zinc finger, C2H2 type" , "C2H2 type zinc finger containing protein"},
{ "zn-finger, C2H2 type", "C2H2 type zinc finger containing protein"}, 
{ "zn-finger, C4 type" , " C4 type zinc finger containing protein"},
{ "acyltransferase family" , "acyltransferase family member"},
{ "acyltransferase family" , "acyltransferase family member"},
{ "RNA recognition motif. (a.k.a. RRM, RBD, or RNP domain) containing protein" , "RNA recognition motif containing protein"},
{ "MSP  domain containing protein" , "major sperm protein family member"},
{ "UDP-glucoronosyl and UDP-glucosyl transferase" , "UDP-glucoronosyl and UDP-glucosyl transferase family member"},
{ "C. elegans Sre G protein-coupled chemoreceptor" , "serpentine receptor Sre, putative G protein-coupled chemoreceptor"},
{ "transthyretin-like family" , "transthyretin-like family member"},
{ "WD domain, G-beta repeat" , "WD domains of G protein beta type containing protein"},
{ "EF hand" , "EF hand calcium binding protein "},
{ "k+ channel tetramerisation domain containing protein" , "voltage-gated potassium channel tetramerisation domain containing protein"},
{ "ras family" , "ras family member"},
{ "ankyrin repeat" , "ankyrin repeat containing protein"},
{ "Sugar  transporter" , "sugar transporter"},
{ "Zinc finger, C3HC4 type" , "C3HC4 type zinc finger containing protein"},
{ "Zinc finger C3HC4 type" , "C3HC4 type zinc finger containing protein"},
{ "Zn-finger, C3HC4 type" , "C3HC4 type zinc finger containing protein"},
{ "Zn-finger C3HC4 type" , "C3HC4 type zinc finger containing protein"},
{ "Leucine Rich Repeat" , "Leucine Rich Repeat containing protein"},
{ "Homeobox domain containing protein" , "homeodomain protein"},
{ "patched family" , "patched family member"},
{ "C.elegans Srg family integral membrane protein" , "integral membrane protein, Srg family"},
{ "zinc finger C-x8-C-x5-C-x3-H type (and similar)" , "C-x8-C-x5-C-x3-H type zinc finger containing protein"},
{ "zn-finger C-x8-C-x5-C-x3-H type (and similar)" , "C-x8-C-x5-C-x3-H type zinc finger containing protein"},
{ "SH2 domain and Protein kinase domain containing protein" , "protein kinase with SH2 domain(s)"},
{ "cysteine rich repeat (DUF139)" , "cysteine rich repeat containing protein"},
{ "TPR Domain" , "tetratricopeptide repeat containing protein"},
{ "glycosyl hydrolases family 18" , "glycosyl hydrolase family 18"},
{ "helix-loop-helix DNA-binding domain containing protein" , "helix-loop-helix putative DNA-binding protein"},
{ "C.elegans Sra family integral membrane protein" , "integral membrane protein, Sra family"},
{ "lipase (class 3)" , "lipase class 3"},
{ "c2 domain containing protein" , "C2, putative phospholipid binding domain containing protein"},
{ "PDZ domain (Also known as DHR or GLGF)" , "PDZ domain containing protein"},
{ "PAZ domain and Piwi domain containing protein" , "PAZ and Piwi domains containing protein"},
{ "sugar (and other) transporter" , "solute carrier family member"},
{ "vitelline membrane outer layer protein I (VOMI)" , "vitelline membrane outer layer protein I-like"},
{ "tetraspanin family" , "tetraspanin family member"},
{ "t-box" , "T-box putative transcription regulator"},
{ "collagen triple helix repeat (20 copies)" , "collagen"},
{ "lipase (class 2)" , "lipase class 2"},
{ "TBC domain containing protein" , "putative small GTPase activator with TBC domain"},
{ "trypsin Inhibitor like cysteine rich domain containing protein" , "trypsin inhibitor like"},
{ "fork head domain containing protein" , "fork head domain transcription factor"},
{ "receptor family ligand binding region and Protein kinase domain and Adenylate and Guanylate cyclase catalytic domain containing protein" , "receptor type guanylate cyclase with protein kinase domain"},
{ "protein kinase domain and Protein kinase C terminal domain containing protein" , "protein kinase with conserved C terminal domain"},
{ "lectin C-type domain and CUB domain containing protein" , "calcium dependent C type lectin with extracellular CUB domain(s)"},
{ "PH domain containing protein" , "pleckstrin homology domain protein"},
{ "DB module" , "DB module containing protein"},
{ "CX module" , "CX module containing protein"},
{ "ubiquitin family" , "ubiquitin family member"},
{ "tc5 transposase" , "TC5 transposase"},
{ "C.elegans integral membrane protein Srb" , "integral membrane protein, Srb family"},
{ "sodium:neurotransmitter symporter family" , "sodium:neurotransmitter symporter family member"},
{ "neurotransmitter-gated ion-channel ligand binding domain containing protein" , "neurotransmitter-gated ion-channel with standard ligand binding domain but atypical transmembrane region"},
{ "DHHC zinc finger domain containing protein" , "DHHC zinc binding domain containing protein "},
{ "DHHC zn-finger domain containing protein" , "DHHC zinc binding domain containing protein "},
{ "DEAD/DEAH box helicase and Helicase conserved C-terminal domain containing protein" , "DEAD/DEAH box RNA helicase"},
{ "Domain of unknown function DUF38 and F-box domain containing protein" , "fog-2 homology domain containing protein"},
{ "voltage gated chloride channel and CBS domain containing protein" , "voltage gated chloride channel"},
{ "kinesin motor domain containing protein" , "kinesin"},
{ "integrase core domain containing protein" , "integrase like protein"},
{ "KH domain containing protein" , "putative RNA binding protein with KH domain(s) "},
{ "Neurotransmitter-gated ion-channel ligand binding domain and Neurotransmitter-gated ion-channel transmembrane region" , "neurotransmitter-gated ion-channel subunit"},
{ "von Willebrand factor type A domain and Lectin C-type domain containing protein" , "von Willebrand factor type A and Lectin type C domains containing protein"},
{ "nematode insulin-related peptide beta type" , "insulin-related peptide beta type"},
{ "cation efflux family" , "cation efflux family member"},
{ "aldehyde dehydrogenase family" , "aldehyde dehydrogenase family member"},
{ "proteasome A-type and B-type" , "core proteasome subunit, A or B type"},
{ "neurotransmitter-gated ion-channel ligand binding domain and Neurotransmitter-gated ion-channel transmembrane region" , "neurotransmitter-gated ion-channel subunit"},
{ "k+ channel tetramerisation domain and ion transport protein" , "voltage sensitive potassium channel subunit"},
{ "hint module" , "hedgehog intein-like autoprocessing domain containing protein"},
{ "adenylate and Guanylate cyclase catalytic domain containing protein" , "adenylate cyclase"},
{ "PHD-finger" , "putative transcription regulator with PHD zinc finger"},
{ "Endonuclease/Exonuclease/phosphatase family and Reverse transcriptase (RNA-dependent DNA polymerase)" , "Endonuclease/Exonuclease/phosphatase family and Reverse transcriptase (dubious prediction?)"},
{ "CUB domain containing protein" , "extracellular CUB domain containing protein"},
{ "ATPase family associated with various cellular activities (AAA)" , "ATPase Associated with diverse cellular Activities"},
{ "Nematode cuticle collagen N-terminal domain and Collagen triple helix repeat" , "cuticule collagen"},
{ "intermediate filament protein and Intermediate filament tail domain containing protein" , "intermediate filament protein with common tail domain"},
{ "animal haem peroxidase" , "haem peroxidase"},
{ "SNF2 family N-terminal domain and Helicase conserved C-terminal domain containing protein" , "SNF2 helicase related protein"},
{ "GLTT repeat (6 copies)" , "GLTT repeats protein (dubious prediction?)"},
{ "EB module" , "EB module containing serine protease inhibitor"},
{ "Lectin C-type domain and CUB domain containing protein" , "calcium dependent C type lectin with extracellular CUB domain(s)"},
{ "jmjC domain containing protein" , "C terminal domain of jumonji transcription factor containing protein"},
{ "insulinase (Peptidase family M16)" , "Peptidase family M16 member "},
{ "histone deacetylase family" , "histone deacetylase"},
{ "fyve zinc finger" , "FYVE zinc binding protein"},
{ "fyve zn-finger" , "FYVE zinc binding protein"},
{ "cullin family" , "cullin"},
{ "cadherin domain containing protein" , "cadherin domain(s) containing protein, does not contain cadherin specific cytoplasmic domain, EGF or laminin motifs"},
{ "aminotransferase class I and II" , "aminotransferase class I or II"},
{ "ankyrin repeat and ion transport protein" , "ion transport protein with ankyrin domain(s)"},
{ "RNA recognition motif" , "RNA recognition motif containing protein"},
{ "WSN domain and protein-tyrosine phosphatase" , "receptor type protein-tyrosine phosphatase"},
{ "DEAD/DEAH box helicase and Helicase conserved C-terminal domain containing protein" , "DEAD/DEAH box RNA helicase"},
{ "phosphotyrosine interaction domain (PTB/PID)" , "phosphotyrosine interaction domain containing protein"},
{ "metallo-beta-lactamase superfamily" , "metallo beta-lactamase/ thiolesterase superfamily member"},
{ "g-patch domain containing protein" , "putative RNA binding G-patch domain protein"},
{ "fibronectin type III domain and protein-tyrosine phosphatase" , "protein-tyrosine phosphatase with fibronectin type III domain(s)"},
{ "ets-domain containing protein" , "transcription factor ETS-related"},
{ "cytidine and deoxycytidylate deaminase zinc-binding region" , "cytidine, cytosine, dCTP et al deaminase"},
{ "SAM domain (Sterile alpha motif)" , "SAM interaction domain(s) containing protein"},
{ "GATA zinc finger" , "GATA zinc finger containing protein "},
{ "GATA zn-finger" , "GATA zinc finger containing protein "},
{ "ABC transporter transmembrane region and ABC transporter" , "ABC transporter with ABC transporter transmembrane region"},
{ "vinculin family" , "vinculin family member"},
{ "protein phosphatase 2c" , "protein phosphatase 2C"},
{ "protein kinase domain and Adenylate and Guanylate cyclase catalytic domain containing protein" , "guanylate cyclase protein kinase"},
{ "m protein repeat" , "M protein repeat containing protein"},
{ "g-protein alpha subunit" , "G-protein alpha subunit"},
{ "formin Homology 2 Domain" , "formin homology 2 domain containing protein"},
{ "cyclin, N-terminal domain and Cyclin, C-terminal domain containing protein" , "cyclin"},
{ "Glutathione S-transferase, N-terminal domain and Glutathione S-transferase, C-terminal domain containing protein" , "Glutathione S-transferase"},
{ "ubiquitin carboxyl-terminal hydrolases family 2 and Ubiquitin carboxyl-terminal hydrolase family 2" , "ubiquitin carboxyl-terminal hydrolase family 2"},
{ "regulator of G protein signaling domain containing protein" , "regulator of G protein signaling"},
{ "pumilio-family RNA binding repeat" , "pumilio-family RNA binding repeat containing protein"},
{ "elongation factor Tu GTP binding domain and Elongation factor Tu domain 2 and Elongation factor Tu C-terminal domain containing protein" , "elongation factor Tu"},
{ "common central domain of tyrosinase" , "common central domain of tyrosinase containing protein"},
{ "chitin binding Peritrophin-A domain containing protein" , "Peritrophin-A domain chitin binding protein "},
{ "calponin family repeat" , "calponin family"},
{ "c6 domain containing protein" , "C6 domain containing protein"},
{ "MYND finger" , "MYND finger containing protein"},
{ "FERM domain (Band 4.1 family)" , "FERM domain (Band 4.1 family) protein"},
{ "DX module" , "DX module containing protein"},
{ "AT hook motif" , "AT hook motif containing protein"},
{ "Zinc finger, C3HC4 type  and IBR domain containing protein" , "RING finger with In Between Ring fingers domain protein"},
{ "Zinc finger, C3HC4 type  and B-box zinc finger" , "RING finger and B-box zinc finger containing protein"},
{ "Zn-finger, C3HC4 type  and B-box zn-finger" , "RING finger and B-box zinc finger containing protein"},
{ "Skp1 family, tetramerisation domain and Skp1 family, dimerisation domain containing protein" , "Skp1 with tetramerisation and dimerisation domains"},
{ "RecF/RecN/SMC N terminal domain and SMC family, C-terminal domain containing protein" , "structural maintenance of chromosomes family member"},
{ "Domain of unknown function and ankyrin repeat and BRCA1 C Terminus  domain containing protein" , "ankyrin repeat and BRCA1 C Terminus domain containing protein"},
{ "sm protein" , "SM protein"},
{ "P21-Rho-binding domain and Protein kinase domain containing protein" , "protein kinase with p21-Rho-binding domain"},
{ "Cyclic nucleotide-binding domain and Protein kinase domain and Protein kinase C terminal domain containing protein" , "cyclic nucleotide dependent protein kinase with conserved C terminal domain"},
{ "protein kinase domain and Kinase associated domain 1 containing protein" , "protein kinase with kinase associated domain 1"},
{ "phorbol esters/diacylglycerol binding domain (C1 domain) and C2 domain and Protein kinase domain and Protein kinase C terminal domain containing protein" , "phorbol esters/diacylglycerol binding protein kinase with conserved C terminal domain"},
{ "f-box domain and 7TM chemoreceptor" , "7 transmembrane chemoreceptor with F-box domain"},
{ "ThiF family" , "NAD/FAD dependent enzyme"},
{ "ThiF family and Repeat in ubiquitin-activating (UBA) protein" , "ubiquitin-activating enzyme"},
{ "PDZ domain  and SAM domain containing protein" , "PDZ and SAM interaction domain(s) containing protein"},
{ "Immunoglobulin domain and Protein kinase domain containing protein" , "protein kinase with immunoglobulin domain(s)"},
{ "C2 domain and WW domain and HECT-domain containing protein" , "E6-AP ubiquitin-protein ligase with C2 and WW domains"},
{ "ABC transporter transmembrane region and ABC transporter" , "ABC transporter with ABC transporter transmembrane region"},
{ "zinc knuckle and DEAD/DEAH box helicase and Helicase conserved C-terminal domain containing protein" , "DEAD/DEAH box RNA helicase with zinc knuckle"},
{ "dynamin family and Dynamin central region and PH domain and Dynamin GTPase effector domain containing protein" , "dynamin"},
{ "PH domain and oxysterol-binding protein" , "oxysterol-binding protein with pleckstrin homology"},
{ "PH domain and Protein kinase domain and Protein kinase C terminal domain containing protein" , "protein kinase with pleckstrin homology and conserved C terminal domain"},
{ "FHA domain containing protein" , "forkhead associated domain containing protein"},
{ "ankyrin repeat and Protein kinase domain containing protein" , "protein kinase with ankyrin repeat"},
{ "ankyrin repeat and KH domain containing protein" , "putative RNA binding protein with KH motif and ankyrin repeat(s)"},
{ "Zinc finger, C3HC4 type  and WWE domain containing protein" , "RING finger and WWE domain containing protein"},
{ "SH3 domain and SH2 domain and Protein kinase domain containing protein" , "src-like protein kinase, with SH2 and SH3 domains"},
{ "SH3 domain and Protein kinase domain containing protein" , "protein kinase with SH3 domain"},
{ "Receptor L domain and Furin-like cysteine rich region and Protein kinase domain containing protein" , "protein kinase, with receptor L domain and furin-like cysteine rich region"},
{ "Raf-like Ras-binding domain and Phorbol esters/diacylglycerol binding domain  and Protein kinase domain containing protein" , "Phorbol esters/diacylglycerol binding protein kinase with Raf-like Ras-binding domain "},
{ "KH domain and Tudor domain containing protein" , "RNA binding protein with KH and Tudor domains"},
{ "Immunoglobulin domain and Fibronectin type III domain and Protein kinase domain containing protein" , "immunoglobulin and fibronectin type III domains containing protein kinase"},
{ "FHA domain and Protein kinase domain containing protein" , "protein kinase with forkhead associated domain"},
{ "F5/8 type C domain and Protein kinase domain containing protein" , "protein kinase with F5/8 type C domain"},
{ "zinc finger, C3HC4 type (RING finger) and B-box zinc finger" , "RING and B-box zinc fingers containing protein"},
{ "sterile alpha motif (SAM)/Pointed domain and Ets-domain containing protein" , "transcription factor ETS-related with sterile alpha motif"},
{ "protein-tyrosine phosphatase and KH domain containing protein" , "protein-tyrosine phosphatase with putative RNA binding KH motif"},
{ "protein kinase domain and Zinc finger, ZZ type" , "protein kinase with ZZ type Zinc finger"},
{ "protein kinase domain and SH3 domain containing protein" , "SH3 domain containing protein kinase"},
{ "protein kinase domain and Protein kinase C terminal domain and Homeobox domain containing protein" , "homeobox containing protein kinase with conserved C terminal domain"},
{ "protein kinase domain and Immunoglobulin domain and Fibronectin type III domain containing protein" , "immunoglobulin and fibronectin type III domains containing protein kinase"},
{ "protein kinase domain and CNH domain containing protein" , "protein kinase with citron homology domain"},
{ "protein kinase domain and 7 transmembrane receptor (rhodopsin family)" , "putative 7 transmembrane receptor, rhodopsin family, fused to protein kinase"},
{ "phorbol esters/diacylglycerol binding domain (C1 domain) and Protein kinase domain and Protein kinase C terminal domain containing protein" , "phorbol esters/diacylglycerol binding domain (C1 domain) protein kinase with conserved C terminal domain"},
{ "phorbol esters/diacylglycerol binding domain (C1 domain) and Diacylglycerol kinase catalytic domain (presumed) and Diacylglycerol kinase accessory domain (presumed)" , "diacylglycerol kinase"},
{ "octicosapeptide repeat and Phorbol esters/diacylglycerol binding domain (C1 domain) and Protein kinase domain and Protein kinase C terminal domain containing protein" , "phorbol esters/diacylglycerol binding protein kinase with octicosapeptide repeat and conserved C terminal domain"},
{ "hr1 repeat and Protein kinase domain and Protein kinase C terminal domain containing protein" , "protein kinase with hr1 repeats and conserved C terminal domain"},
{ "fyve zinc finger and Phosphatidylinositol-4-phosphate 5-Kinase" , "FYVE zinc binding phosphatidylinositol-4-phosphate 5-Kinase FYVE zinc binding protein"},
{ "f-box domain and short chain dehydrogenase" , "short chain dehydrogenase with F-box domain"},
{ "f-box domain and glycosyl transferase" , "glycosyl transferase with F-box domain"},
{ "f-box domain and Arylesterase" , "arylesterase with F-box domain"},
{ "dynamin family" , "dynamin like"},
{ "cyclic nucleotide-binding domain and Protein kinase domain and Protein kinase C terminal domain containing protein" , "cyclic nucleotide-dependent protein kinase with conserved C terminal domain"},
{ "calponin homology (CH) domain and Calponin family repeat" , "calponin"},
{ "WW domain and HECT-domain (ubiquitin-transferase)" , "E6-AP ubiquitin-protein ligase with WW domain(s)"},
{ "VHS domain and fyve zinc finger and Ubiquitin interaction motif" , "VHS domain protein with FYVE zinc binding and ubiquitin interaction motifs"},
{ "SAM domain (Sterile alpha motif) and PDZ domain (Also known as DHR or GLGF) and PH domain containing protein" , "PDZ, pleckstrin homology and SAM interaction domains containing protein"},
{ "PDZ domain (Also known as DHR or GLGF) and PH domain containing protein" , "PDZ and pleckstrin homology domains containing protein"},
{ "PDZ domain (Also known as DHR or GLGF) and C2 domain containing protein" , "PDZ and C2 domains containing protein"},
{ "KH domain and Zinc knuckle" , "putative RNA binding protein with KH motif and zinc knuckle"},
{ "KH domain and SAM domain (Sterile alpha motif)" , "putative RNA binding protein with KH motif and SAM interaction domain(s)"},
{ "HECT-domain (ubiquitin-transferase)" , "E6-AP ubiquitin-protein ligase"},
{ "Beige/BEACH domain and WD domain, G-beta repeat" , "Beige/BEACH domain and WD domain, G-beta repeat containing protein"},
{ "Beige/BEACH domain and WD domain, G-beta repeat and fyve zinc finger" , "BEACH domain, WD repeats and FYVE zinc binding protein"},
{ "jmjN domain and jmjC domain containing protein" , "jumonji transcription factor"},
{ "ankyrin repeat and fyve zinc finger" , "FYVE zinc binding protein with ankyrin repeat(s)"},
{ "ankyrin repeat and SAM domain containing protein" , "ankyrin and SAM interaction domain(s) containing protein"},
{ "ankyrin repeat and HECT-domain containing protein" , "E6-AP ubiquitin-protein ligase with ankyrin repeat(s)"},
{ "Zinc finger, C3HC4 type  and tRNA synthetases class I" , "putative tRNA synthetase class I with RING finger"},
{ "Zn-finger, C3HC4 type  and tRNA synthetases class I" , "putative tRNA synthetase class I with RING finger"},
{ "WIF domain and Protein kinase domain containing protein" , "protein kinase with WIF domain"},
{ "VHS domain and Ubiquitin interaction motif and SH3 domain containing protein" , "VHS domain protein with SH3 and ubiquitin interaction domains"},
{ "VHS domain and GAT domain containing protein" , "VHS domain protein with GAT domain"},
{ "UBA/TS-N domain and Putative zinc finger in N-recognin and HECT-domain containing protein" , "E6-AP ubiquitin-protein ligase with N-recognin homology"},
{ "Protein kinase domain and ankyrin repeat and Death domain containing protein" , "ankyrin repeat and death domain containing protein kinase"},
{ "Protein kinase domain and WD domain, G-beta repeat" , "protein kinase with WD domain, G-beta repeat"},
{ "Protein kinase domain and SH3 domain containing protein" , "protein kinase with SH3 domain"},
{ "Protein kinase domain and Protein kinase C terminal domain and Phorbol esters/diacylglycerol binding domain  and PH domain and CNH domain containing protein" , "phorbol esters/diacylglycerol binding protein kinase with pleckstrin homology, CNH conserved C terminal domains"},
{ "Protein kinase domain and PBX domain and Homeobox domain containing protein" , "pbx like homeoprotein with protein kinase domain"},
{ "Protein kinase domain and EB module" , "protein kinase with EB module"},
{ "PH domain containing protein" , "pleckstrin homology domain containing protein"},
{ "PH domain and Protein kinase domain containing protein" , "protein kinase with pleckstrin homology domain"},
{ "PH domain and Protein kinase domain and Protein kinase C terminal domain containing protein" , "protein kinase with pleckstrin homology and conserved C terminal domain"},
{ "MATH domain and Domain of unknown function DUF38 and F-box domain containing protein" , "fog-2 homology and MATH domains containing protein"},
{ "KH domain containing protein" , "putative RNA binding protein with KH domain"},
{ "Immunoglobulin domain and kringle domain and Protein kinase domain containing protein" , "protein kinase with immunoglobulin and kringle domains"},
{ "F-box domain and MATH domain and BTB/POZ domain containing protein" , "BTB/POZ, MATH and F-box domains containing protein"},
{ "F-box domain and Domain of unknown function DUF38 and Domain of unknown function" , "fog-2 homology domain containing protein"},
{ "Ephrin receptor ligand binding domain and Fibronectin type III domain and Protein kinase domain containing protein" , "receptor type protein kinase with fibronectin type III and ephrin receptor ligand binding domain"},
{ "Activin types I and II receptor domain and Protein kinase domain containing protein" , "Activin types I or II receptor protein kinase"},
{ "Acetyltransferase  family and jmjC domain containing protein" , "putative acetyltransferase with C terminal domain of jumonji transcription factor "},
{ "7TM chemoreceptor and F-box domain and Domain of unknown function DUF38" , "7 transmembrane chemoreceptor with fog-2 homology domain"},
{ "BRO1", "BRO1 containing protein" },
{ "CXCXC repeat", "CXCXC repeat containing protein" },
{ "DM DNA-binding", "DM DNA-binding containing protein" },
{ "CBS", "CBS containing protein" },
{ "Nematode-specific EB region", "Nematode-specific EB region containing protein" },
{ "Calcium-binding EF-hand", "Calcium-binding EF-hand containing protein" },
{ "FLYWCH Zn-finger", "FLYWCH zinc finger containing protein" },
{ "Zn-finger, FYVE type", "FYVE type zinc finger containing protein" },
{ "Zn-finger, GATA type", "GATA type zinc finger containing protein" },
{ "HEAT repeat", "HEAT repeat containing protein" },
{ "DNA-binding HORMA", "DNA-binding HORMA containing protein" },
{ "PKN/rhophilin/rhotekin rho-binding repeat", "PKN/rhophilin/rhotekin rho-binding repeat containing protein" },
{ "Helix-turn-helix motif", "Helix-turn-helix motif containing protein" },
{ "Kelch repeat", "Kelch repeat containing protein" },
{ "K+ channel tetramerisation", "K+ channel tetramerisation containing protein" },
{ "Leucine-rich repeat", "Leucine-rich repeat containing protein" },
{ "Mbt repeat", "Mbt repeat containing protein" },
{ "MIT", "MIT containing protein" },
{ "MORN motif", "MORN motif containing protein" },
{ "Paired amphipathic helix", "Paired amphipathic helix containing protein" },
{ "PPAK motif", "PPAK motif containing protein" },
{ "PPR repeat", "PPR repeat containing protein" },
{ "DNA-binding RFX", "DNA-binding RFX containing protein" },
{ "RPEL repeat", "RPEL repeat containing protein" },
{ "DNA-binding SAP", "DNA-binding SAP containing protein" },
{ "SPK", "SPK containing protein" },
{ "TPR repeat", "TPR repeat containing protein" },
{ "Zn-finger, modified RING", "modified RING zinc finger containing protein" },
{ "XYPPX repeat", "XYPPX repeat containing protein" },
{ "YLP motif", "YLP motif containing protein" },
{ "Zn-finger, A20-like", "A20-like zinc finger containing protein" },
{ "Zn-finger, AN1-like", "AN1-lik zinc finger containing protein" },
{ "BED finger", "BED finger containing protein" },
{ "Zn-finger, B-box", "B-box zinc finger containing protein" },
{ "Zn-finger, C2H2 type", "C2H2 type zinc finger containing protein" },
{ "Zn-finger, C2HC type", "C2HC type zinc finger containing protein" },
{ "Zn-finger, RING", "RING zinc finger containing protein" },
{ "Zn-finger, C4-type steroid receptor", "C4-type zinc finger nuclear receptor" },
{ "Zn-finger, C5HC2 type", "C5HC2 type zinc finger containing protein" },
{ "Zn-finger, C-x8-C-x5-C-x3-H type", "C-x8-C-x5-C-x3-H type zinc finger containing protein" },
{ "Zn-finger, CCHC type", "CCHC type  zinc finger containing protein" },
{ "Zn-finger, CXXC type", "CXXC type zinc finger containing protein" },
{ "Zn-finger, DHHC type", "DHHC type zinc finger containing protein" },
{ "HIT Zn-finger", "HIT zinc finger containing protein" },
{ "Zn-finger, MIZ type", "MIZ type zinc finger containing protein" },
{ "Zn-finger, MYND type", "MYND type zinc finger containing protein" },
{ "Zn-finger, NF-X1 type", "NF-X1 type zinc finger containing protein" },
{ "TAZ finger", "TAZ finger containing protein" },
{ "Zn-finger, Tim10/DDP type", "Tim10/DDP type zinc finger containing protein" },
{ "Zn-finger, TRAF type", "TRAF type zinc finger containing protein" },
{ "Zn-finger, ZPR1 type", "ZPR1 type zinc finger containing protein" },
{ "Zn-finger, ZZ type", "ZZ type zinc finger containing protein" },

{0,0}
} ;

