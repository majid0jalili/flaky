cd /mnt/majid/bench/benchspec/CPU/600.perlbench_s/run/run_base_refspeed_mytest-m64.0000
perf stat -o /home/majid/test/t3/600.perl.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1 ./perlbench_s_base.mytest-m64 -I./lib checkspam.pl 2500 5 25 11 150 1 1 1 1
#------------602---------------
cd /mnt/majid/bench/benchspec/CPU/602.gcc_s/run/run_base_refspeed_mytest-m64.0000
perf stat -o /home/majid/test/t3/602.gcc.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1 ./sgcc_base.mytest-m64 gcc-pp.c -O5 -fipa-pta -o gcc-pp.opts-O5_-fipa-pta.s
#-------------605--------------
cd /mnt/majid/bench/benchspec/CPU/605.mcf_s/run/run_base_refspeed_mytest-m64.0000
perf stat -o /home/majid/test/t3/605.mcf.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  ./mcf_s_base.mytest-m64 inp.in


#---- GAPBS------------------------
perf stat -o /home/majid/test/t3/bfs.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /mnt/majid/gapbs/bfs -f /mnt/majid/gapbs/benchmark/twitter.sg
perf stat -o /home/majid/test/t3/pr.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /mnt/majid/gapbs/pr -f /mnt/majid/gapbs/benchmark/twitter.sg
perf stat -o /home/majid/test/t3/cc.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /mnt/majid/gapbs/cc -f /mnt/majid/gapbs/benchmark/twitter.sg
perf stat -o /home/majid/test/t3/bc.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /mnt/majid/gapbs/bc -f /mnt/majid/gapbs/benchmark/twitter.sg
perf stat -o /home/majid/test/t3/tc.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /mnt/majid/gapbs/tc -g 25

#----- Kernls-----------
perf stat -o /home/majid/test/t3/gups.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/gups/gups_vanilla 29 10 100000000
perf stat -o /home/majid/test/t3/bmt.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/newbneches/cc_himenobmtxp_xl/bmt
perf stat -o /home/majid/test/t3/spmv_csr.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/newbneches/fait-maison-spmv/src/sequential/c/run_float /home/majid/test/newbneches/fait-maison-spmv/src/sequential/c/1138_bus/1138_bus.mtx csr
perf stat -o /home/majid/test/t3/spmv_ell.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/newbneches/fait-maison-spmv/src/sequential/c/run_float /home/majid/test/newbneches/fait-maison-spmv/src/sequential/c/1138_bus/1138_bus.mtx ell
perf stat -o /home/majid/test/t3/spmv_coo.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/newbneches/fait-maison-spmv/src/sequential/c/run_float /home/majid/test/newbneches/fait-maison-spmv/src/sequential/c/1138_bus/1138_bus.mtx coo
perf stat -o /home/majid/test/t3/hpcg.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/newbneches/hpcg/bin/xhpcg
perf stat -o /home/majid/test/t3/stream.add.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/stream/add
perf stat -o /home/majid/test/t3/stream.copy.out -I 1000 -e instructions,mem_load_retired.l1_miss,mem_load_retired.l2_miss,mem_load_retired.l3_miss --  taskset 0x1  /home/majid/test/stream/copy

