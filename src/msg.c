#include "msg.h"
#include <stdio.h>
#include <stdlib.h>

void ModelsExplanation(void){
  fprintf(stderr,
  "                                                                         \n"
  "  -m <c>:<d>:<i>:<m/e>  reference context model (ex:-m 13:100:0:0/0),    \n"
  "  -m <c>:<d>:<i>:<m/e>  reference context model (ex:-m 20:1000:1:1/10),  \n"
  "  ...                                                                    \n"
  "                        templates use <c> for context-order size, <d> for\n"
  "                        alpha (1/<d>), <i> (0 or 1) to set the usage of  \n"
  "                        inverted repeats (set 1 to use) and <m> to the   \n"
  "                        maximum allowed mutation on the context without  \n"
  "                        being discarded (usefull in deep contexts), under\n"
  "                        the estimator <e>.                               \n"
  "                                                                         \n");
  }

void PrintMenu(void){
  fprintf(stderr,
  "                                                                         \n"
  "NAME                                                                     \n"
  "      Magnet v%u.%u - an ultra-fast and high-sensitive tool              \n"
  "                      to separate exogenous of endogenous DNA.           \n"
  "                                                                         \n"
  "AUTHORS                                                                  \n"
  "      Diogo Pratas        pratas@ua.pt                                   \n"
  "      Morteza Hosseini    seyedmorteza@ua.pt                             \n"
  "      Armando J. Pinho    ap@ua.pt                                       \n"
  "                                                                         \n"
  "SYNOPSIS                                                                 \n"
  "      ./Magnet [OPTION]... [IN_FILE_1] [IN_FILE_2]                       \n"
  "                                                                         \n"
  "SAMPLE                                                                   \n"
  "      Filter exogenous: ./Magnet -l 3 -t 0.5 -o out.fq in.fq seq.fa      \n"
  "                                                                         \n"
  "DESCRIPTION                                                              \n"
  "      Separate exogenous of endogenous DNA.                              \n"
  "      Isolates specific reads with similarity to other sequence(s).      \n"
  "      Filters FASTQ reads by similarity to FASTA genome sequence(s).     \n"
  "      The genome sequence may be constituted by contigs, scaffolds,      \n"
  "      or assembled sequences.                                            \n"
  "                                                                         \n"  
  "      -h,  --help                                                        \n"
  "           usage guide (help menu).                                      \n"
  "                                                                         \n"  
  "      -F,  --force                                                       \n" 
  "           force mode. Overwrites old files.                             \n"  
  "                                                                         \n"  
  "      -v,  --verbose                                                     \n"  
  "           verbose mode (more information).                              \n"  
  "                                                                         \n"  
  "      -V,  --version                                                     \n"  
  "           Display version number, license and basic information.        \n"  
  "                                                                         \n"  
  "      -i,  --invert                                                      \n"
  "           Inverts search. Filters only the complement.                  \n"
  "                                                                         \n"
  "      -s,  --show                                                        \n"  
  "           Show similarity levels [%u;%u].                               \n"  
  "                                                                         \n"
  "      -l [NUMBER],  --level [NUMBER]                                     \n"  
  "           Similarity level (integer).                                   \n"  
  "           Default level: %u.                                            \n"  
  "           It defines sensitivity in balance with computational          \n"
  "           resources (RAM & time). Use -s for levels perception.         \n"  
  "                                                                         \n"  
  "      -t [NUMBER],  --threshold [NUMBER]                                 \n"  
  "           Threshold of similarity (real).                               \n"
  "           Value contained in [0.0;1.0].                                 \n"
  "                                                                         \n"  
  "      -p [NUMBER],  --portion [NUMBER]                                   \n"  
  "           Portion of acceptance.                                        \n"  
  "           Acceptance bases (default: %u).                               \n"  
  "                                                                         \n"  
  "      -o [OUT_FILE],  --output [OUT_FILE]                                \n"  
  "           Output file name.                                             \n"  
  "           The OUT_FILE will contain the filtered reads.                 \n"  
  "                                                                         \n"  
  "      -n [NUMBER],  --threads [NUMBER]                                   \n"  
  "           Number of threads.                                            \n"  
  "                                                                         \n"  
  "      [IN_FILE_1]                                                        \n"  
  "           Input FASTQ file name -- MANDATORY.                           \n"
  "                                                                         \n"  
  "      [IN_FILE_2]                                                        \n"  
  "           Input FASTA file name -- MANDATORY.                           \n"  
  "                                                                         \n" 
  "COPYRIGHT                                                                \n"
  "    Copyright (C) 2017-2018, IEETA, University of Aveiro.                \n"
  "    This is a Free software, under GPLv3. You may redistribute           \n"
  "    copies of it under the terms of the GNU - General Public             \n"
  "    License v3 <http://www.gnu.org/licenses/gpl.html>. There             \n"
  "    is NOT ANY WARRANTY, to the extent permitted by law.                 \n"
  "                                                                         \n", 
  VERSION, RELEASE, MIN_LEV, MAX_LEV, DEFAULT_SAMPLE, DEFAULT_THREADS);
  }

void PrintVersion(void){
  fprintf(stderr,
  "                                                                         \n"
  "                          ===================                            \n"
  "                          |   Magnet %u.%u  |                            \n"
  "                          ===================                            \n"
  "                                                                         \n"
  "                An ultra-fast and high-sensitive tool to                 \n"
  "                  separate exogenous of endogenous DNA.                  \n"
  "                                                                         \n"
  "              Copyright (C) 2014-2018 University of Aveiro.              \n"
  "                                                                         \n"
  "                  This is a Free software, under GPLv3.                  \n"
  "                                                                         \n"
  "You may redistribute copies of it under the terms of the GNU - General   \n"
  "Public License v3 <http://www.gnu.org/licenses/gpl.html>. There is NOT   \n"
  "ANY WARRANTY, to the extent permitted by law. Developed and Written by   \n"
  "Diogo Pratas, Morteza Hosseini and Armando J. Pinho.\n\n", VERSION, RELEASE);
  }
