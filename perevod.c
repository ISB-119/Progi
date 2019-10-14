#include <stdio.h>
#define byte char

void print_bin(unsigned a);
int main()
{
	print_bin(-93);
	return 0;
}
void print_bin(unsigned a)
{
	int b = (int) sizeof a;
	unsigned mask = 1;
	printf("mask=%d\n", mask);
	if ((int)a<0) 
		printf("-");
		a =~a;
	for (mask =0x10000000; mask >=1; mask>>=1)
	if (>=0)
		printf((!(a&mask))? "0":"1");
	else
		printf((a&mask)? "0":"1");
	printf("\n");
}
