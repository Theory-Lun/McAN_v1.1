# McAN


## Introduction

McAN is a tool for haplotype network construction for sequences. The web service of McAN will be found here https://ngdc.cncb.ac.cn/ncov/online/tool/haplotype. The haplotype network of SARS-CoV-2 constructed by McAN will be found here https://ngdc.cncb.ac.cn/ncov/haplotype/.

## Compiling

McAN can be build on most Linux systems. Please build the following headers:
- cJSON: https://github.com/DaveGamble/cJSON.git
- hashmap: https://github.com/DavidLeeds/hashmap.git

and install

- cmake ( >3.19 )

for compiling and running McAN. And then compile McAN by doing follows:
```shell
git clone https://github.com/Theory-Lun/McAN.git
cd McAN
mkdir build
cd build
cmake ..
make
```
## Usage and Examples
For testing McAN, please doing this:
```shell
cd .../McAN/example
mkdir rlt
```
First, generate site file:
```shell
../build/McAN siteMask \
--mutation data/mut \
--meta data/meta_13col \
--out rlt/siteMask \
--minfreq 0.01
```
Then, construct haplotype network:
```shell
../build/McAN \
--mutation data/mut \
--meta data/meta_13col \
--sitemask rlt/siteMask \
--outDir rlt \
--oJSON \
--nthread 3
```

The results will be generated in `example/rlt`. The pre-runned results would be found in `example/rlt_example`.




## Options
```
Usage: McAN [option]...
       McAN siteMask [option]...

Options:
  --vcf <file>        input vcf file
  --mutation <file>   input mutation file
  --meta <file>       input meta file
  --minfreq <int>     filtered out variants with frequency < minfreq [default: 0]
  --maxnsample <int>  maximum number of samples [default: Inf]
  --sitemask <file>   input sitemask file [optional]
  --nthread <int>     number of worker threads [default: 1]
  --outDir <dir>      directory for output
  --oJSON             output network with JSON format
  --oTSV              output network with TSV format
  --oGraphML          output network with GraphML format
  --oMutation         convert vcf into mutation format and output

  --help              display this help and exit
  --version           output version information and exit
```


## Contributers
- McAN contributors

## Citation
Please cite this for 2019 Novel Coronavirus Resource:
```
Zhao WM, Song SH, Chen ML, et al. The 2019 novel coronavirus resource. Yi Chuan. 2020;42(2):212–221. doi:10.16288/j.yczz.20-030 [PMID: 32102777]
```
or BibTeX Format:
```
@article{zhao20202019,
  title={The 2019 novel coronavirus resource.},
  author={Zhao, Wen-Ming and Song, Shu-Hui and Chen, Mei-Li and Zou, Dong and Ma, Li-Na and Ma, Ying-Ke and Li, Ru-Jiao and Hao, Li-Li and Li, Cui-Ping and Tian, Dong-Mei and others},
  journal={Yi chuan= Hereditas},
  volume={42},
  number={2},
  pages={212--221},
  year={2020}
}
```

## Contact
If you have any questions, feel free to contact us. lil@big.ac.cn

## License
MIT License
>  Copyright (c) 2022 McAN contributors
>
>  Permission is hereby granted, free of charge, to any person obtaining a copy
>  of this software and associated documentation files (the "Software"), to deal
>  in the Software without restriction, including without limitation the rights
>  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
>  copies of the Software, and to permit persons to whom the Software is
>  furnished to do so, subject to the following conditions:
>
>  The above copyright notice and this permission notice shall be included in
>  all copies or substantial portions of the Software.
>
>  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
>  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
>  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
>  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
>  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
>  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
>  THE SOFTWARE.
>
