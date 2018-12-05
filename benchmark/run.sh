#!/bin/bash
# =============================================================================
# ============================================================================|
# ================= COMPARISON OF MAGNET WITH OTHER TOOLS ====================|
# ============================================================================|
# =============================================================================
#
# ! Implementation for Linux OS, with at least 1 TB of free disk and 8 cores
#
GET_CONDA=1;
GET_BWA=1;
GET_BOWTIE=1;
GET_MAGNET=1;
#
GET_SYNTHETIC_DATA=1;
GET_REAL_DATA=1;
#
RUN_MAGNET=1;
RUN_BOWTIE=1;
RUN_BWA=1;
# =============================================================================
# DOWNLOAD TOOLS                                                              |
# =============================================================================
if [[ "$GET_CONDA" -eq "1" ]]; then
  wget https://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh
  chmod +x Miniconda3-latest-Linux-x86_64.sh
  ./Miniconda3-latest-Linux-x86_64.sh
fi
# =============================================================================
if [[ "$GET_BWA" -eq "1" ]]; then
  conda install bwa
fi
# =============================================================================
if [[ "$GET_BOWTIE" -eq "1" ]]; then
  conda install bowtie2
fi
# =============================================================================
if [[ "$GET_MAGNET" -eq "1" ]]; then
  rm -rf magnet/ Magnet
  git clone https://github.com/pratas/magnet.git
  cd magnet/src/
  cmake .
  make
  cp Magnet ../../
  cd ../../
fi
# =============================================================================
# DATASET                                                                     |
# =============================================================================
if [[ "$GET_SYNTHETIC_DATA" -eq "1" ]]; then
  echo "Building synthetic data ...";
fi
# =============================================================================
if [[ "$GET_REAL_DATA" -eq "1" ]]; then
  echo "Building real data ...";
fi
# =============================================================================
# RUN TOOLS                                                                   |
# =============================================================================
if [[ "$RUN_MAGNET" -eq "1" ]]; then
  (time ./Magnet $PARAM_MAGNET --threads 8 -o auth-fil-$REFERENCE-x.fq $REFERENCE.fa $TARGET ) &> REPORT_MAGNET;
fi
# =============================================================================
if [[ "$RUN_BOWTIE" -eq "1" ]]; then
  #(time ./bowtie $PARAM_BOWTIE -o auth-fil-$REFERENCE-x.fq $REFERENCE.fa $TARGET ) &> REPORT_BOWTIE;
  bowtie2-build -f $REFERENCE.fa $REFERENCE
  (time bowtie2 --threads 8 --end-to-end --very-sensitive -x $REFERENCE -U auth-fil-$REFERENCE-x.fq -S REFERENCE.sam ) &> REPORT_BWA
fi
# =============================================================================
if [[ "$RUN_BWA" -eq "1" ]]; then
  (time ./bwa $PARAM_BWA -o auth-fil-$REFERENCE-x.fq $REFERENCE.fa $TARGET ) &> REPORT_BWA;
fi
# =============================================================================
# PLOT                                                                        |
# =============================================================================


# =============================================================================
