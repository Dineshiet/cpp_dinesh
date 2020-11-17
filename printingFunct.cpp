#include<stdio.h>




int main()

{

	int d = 123;

	float f = 123.45;



	printf("%d\n", d);

	printf("%8d\n", d);

	printf("%08d\n", d);

	printf("%x\n", d);

	printf("0x%x\n", d);

	printf("%#x\n", d);

	printf("0x%8x\n", d);

	printf("%#10x\n", d);

	printf("0x%08x\n", d);

	printf("%#010x\n", d);

	printf("%#X\n", d);

	printf("0x%8X\n", d);

	printf("%#10X\n", d);

	printf("0X%08X\n", d);

	printf("%#010X\n", d);

	printf("%f\n", f);

	printf("%8.2f\n", f);

	printf("%08.2f\n", f);

	printf("%8.3f\n", f);

	printf("%08.3f\n", f);



}