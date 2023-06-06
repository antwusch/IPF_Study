first thing you need to do is the "Preseg"
which gives masks, but does not include tumors or vessels

and the only one you will directly run is the runpreseg.sh
that calls the others
and you run it like
sh runpreseg.sh SUBJECT SCAN KERNEL
It does a whole 4D scan
you will have to run the scans separatelly
but I wouldnt run more than one scan in parallel, because it takes lots of memory



this is the fragile part
once you get past this, you run the alpha shape on each phase, this is robust but you will need to change alpha
I usually start with alpha 15
if there is a very large tumor I have gone up to alpha 25, but the larger the more oversegmentation
the lowest I have gone is 10
but alpha 15 is generally the best as long as the tumors are included
for less oversegmentation
10 is what I would use if there were no tumors
Don't go lower than 10

I usually do the 100IN phase to get the alpha 
-- sh alphashape.sh SUBJECT SCAN KERNEL PHASE ALPHA
and once I know alpha
then I use that same alpha on all phases
and use the parallel gnu to run them in parallel -- sh p_alphashape.sh SUBJECT KERNEL ALPHA SCAN1(opt) SCAN2(opt)


finally softlink from alpha to mask
sh softLinkMask.sh SUBJECT KERNEL SCAN1 SCAN2(OPT)

