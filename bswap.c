int bswap(){
	asm (
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			"bswap %eax\n\t"
			);
}
int main(){
	for(int i = 0; i < 2147483647; i++)
		bswap();		
}
