[![License: GPL v3](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](LICENSE)
<br>&nbsp;
<p align="center">
<img src="imgs/logo.png" alt="MAGNET" width="200" border="0" /></p>
<b><p align="center">MAGNET: an ultra-fast and high-sensitive tool to filter specific DNA content</p></b>

## INSTALL
Get MAGNET and make the project, using:
```bash
git clone https://github.com/pratas/magnet.git
cd magnet/src
cmake .
make
```
Note, an already compiled version of MAGNET is available for 64 bit Linux OS in
the `bin/` directory.


## RUN
If you want to run MAGNET in stand-alone mode, use the following command:
```bash
./MAGNET [OPTION]... [IN_FILE_1] [IN_FILE_2]
```
For example:
```bash
./MAGNET -l 3 -t 0.5 -o out.fq in.fq seq.fa
```
Options are described in the following sections.

### Input file format
MAGNET automatically detects a genomic data file format by looking inside the
file and not by the file extension. For example, a FASTA file, say “test”, can
be fed into MAGNET as "test", "test.fa", "test.fasta", "test.fas", "test.fsa" or
any other file extension. By this explanation, running
```bash
./MAGNET -l 3 -t 0.5 -o out.fq test1 test2
```
will be exactly the same as running
```bash
./MAGNET -l 3 -t 0.5 -o out.fq test1.fq test2.fa
```

### Compare MAGNET with other methods
If you want to compare MAGNET with other methods, set the parameters in 
**run.sh** bash script, at `scripts/` directory, then run it:
```bash
./run.sh
```
With this script, you can download the datasets, install the tools, run these tools, and finally, print the results.


## OPTIONS
To see the possible options, type:
```bash
./MAGNET
```

which provides the following:
```
NAME                                                                     
      MAGNET v23.2 - an ultra-fast and high-sensitive tool              
                      to filter specific DNA content.

SYNOPSIS                                                                 
      ./MAGNET [OPTION]... [IN_FILE_1] [IN_FILE_2]                       
                                                                         
SAMPLE                                                                   
      Filter content: ./MAGNET -l 3 -t 0.5 -o out.fq in.fq seq.fa      
                                                                         
DESCRIPTION                                                              
      Filter specific DNA content from FASTQ reads.                              
      Isolates specific reads with similarity to other sequence(s).      
      Filters FASTQ reads by similarity to FASTA genome sequence(s).     
      The genome sequence may be constituted by contigs, scaffolds,      
      or assembled sequences.                                            
                                                                         
      -h,  --help                                                        
           usage guide (help menu).                                      
                                                                         
      -F,  --force                                                       
           force mode. Overwrites old files.                             
                                                                         
      -v,  --verbose                                                     
           verbose mode (more information).                              
                                                                         
      -V,  --version                                                     
           Display version number, license and basic information.        

      -i,  --invert
           Inverts search. Filters only the complement.

      -s,  --show                                                        
           Show similarity levels [1;44].                               
                                                                         
      -l [NUMBER],  --level [NUMBER]                                     
           Similarity level (integer).                                   
           Default level: 1.                                            
           It defines sensitivity in balance with computational          
           resources (RAM & time). Use -s for levels perception.         
                                                                         
      -t [NUMBER],  --threshold [NUMBER]                                 
           Threshold of similarity (real).                               
           Value contained in [0.0;1.0].                                 
                                                                         
      -p [NUMBER],  --portion [NUMBER]                                   
           Portion of acceptance.                                        
           Acceptance bases (default: 2).                               
                                                                         
      -o [OUT_FILE],  --output [OUT_FILE]                                
           Output file name.                                             
           The OUT_FILE will contain the filtered reads.                 
                                                                         
      -n [NUMBER],  --threads [NUMBER]                                   
           Number of threads.                                            
                                                                         
      [IN_FILE_1]                                                        
           Input FASTQ file name -- MANDATORY.                           
                                                                         
      [IN_FILE_2]                                                        
           Input FASTA file name -- MANDATORY.                           
                                                                         
COPYRIGHT                                                                
    Copyright (C) 2014-2018, IEETA, University of Aveiro.                
    This is a Free software, under GPLv3. You may redistribute           
    copies of it under the terms of the GNU - General Public             
    License v3 <http://www.gnu.org/licenses/gpl.html>. There             
    is NOT ANY WARRANTY, to the extent permitted by law.  
```
MAGNET uses standard ouput stream, hence, its output can be directly integrated
with pipelines.

If you are interested in the topic of "metagenomics" and "ancient DNA", you can read the 
articles [[1]](https://en.wikipedia.org/wiki/Metagenomics),
[[2]](https://en.wikipedia.org/wiki/Ancient_DNA),


## CITE
Please cite the followings, if you use MAGNET: 
* D. Pratas, "MAGNET: an ultra-fast and high-sensitive tool to filter specific DNA content", 2023.

## RELEASES
* [Release](https://github.com/pratas/magnet/releases) 1.


## ISSUES
Please let us know if there is any 
[issues](https://github.com/pratas/magnet/issues).


## LICENSE
MAGNET is under GPL v3 license. For more information, click 
[here](http://www.gnu.org/licenses/gpl-3.0.html).
