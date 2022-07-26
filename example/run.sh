../build/McAN siteMask \
--mutation data/mut \
--meta data/meta_13col \
--out rlt/siteMask \
--minfreq 0.01

../build/McAN \
--mutation data/mut \
--meta data/meta_13col \
--sitemask rlt/siteMask \
--outDir rlt \
--oJSON \
--nthread 3

