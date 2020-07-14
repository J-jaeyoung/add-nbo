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
    if(!f1){
        printf("%s: Input file does not exist\n", argv[1]);
        return 0;
    }
    if(!f2){
        printf("%s: Input file does not exist\n", argv[2]);
        return 0;
    }
    if((fread(&first, 1, 5, f1) != 4) ||
        (fread(&second, 1, 5, f2) != 4)) {
            printf("Input file is wrong!\n");
            return 0;
    }

    first = ntohl(first);   //htonl works
    second = ntohl(second); //htonl works
    sum = first + second;
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", 
            first, first, second, second, sum, sum);

    fclose(f2);
    fclose(f1);
}