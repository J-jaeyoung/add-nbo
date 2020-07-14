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
`bswap`과 `mov` 의 성능 비교

|a|BSWAP|MOV|
|-|-|-|
|time|22.397s|45.331s| 

```
$ gcc -o BSWAP bswap.c
$ gcc -o MOV mov.c
$ time ./BSWAP
$ time ./MOV
```
