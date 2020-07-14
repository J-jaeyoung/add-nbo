#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>

int main(int argc, char *argv[]){
    uint32_t first, second, sum;

    if(argc != 3){
        printf("Usage: %s <file1> <file2>\n", argv[0]);
        return 0;
    }

    FILE *f1 = fopen(argv[1], "r");
    FILE *f2 = fopen(argv[2], "r");

    fread(&first, 1, 4, f1);
    fread(&second, 1, 4, f2);

    first = ntohl(first);
    second = ntohl(second);
    sum = first + second;
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", 
            first, first, second, second, sum, sum);

    fclose(f2);
    fclose(f1);
}
