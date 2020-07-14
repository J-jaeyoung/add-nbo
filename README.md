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
$ gcc -o .test/BSWAP .test/bswap.c
$ gcc -o .test/MOV .test/mov.c
$ time .test/BSWAP
$ time .test/MOV
```
