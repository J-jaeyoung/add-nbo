## Description
gilgil mentor add-nbo HW

## How to compile & test
```
$ make
$ echo -n -e \\x00\\x00\\x03\\xe8 > sample1.bin
$ echo -n -e \\x00\\x00\\x01\\xf4 > sample2.bin
$ ./add-nbo sample1.bin sample2.bin
```

## Additional (bswap speed test)
```
$ gcc -o BSWAP bswap.c
$ gcc -o MOV mov.c
$ time ./BSWAP > bswap_time
$ time ./MOV > mov_time
```
