#include <stdlib.h>
#include <stdio.h>

int RecA(int, int);
int FullS(int);
int nom[5] = {0, 1, 2, 5, 10};

int main()
{
	int number;
	printf("Enter number:");
	scanf("%d", &number);
	printf("Recursion algorithm: %d\n", RecA(number,4));
	printf("Iterative algorithm: %d\n", FullS(number));
	return 0;
}
int RecA(int s, int b){
if(nom[b]==1)return 1;
	else if(s > nom[b])
		return (RecA(s,b-1)+RecA(s-nom[b],b));
	else if(s == nom[b])
		return (RecA(s,b-1)+1);
	else return RecA(s,b-1);
}
int FullS(int s)
{
	int count = 0;
	for(int i = 0; i <= s; i++)
		for(int j = 0; j <= s/2; j++)
			for(int f = 0; f <= s/5; f++)
				for(int k = 0; k <= s/10; k++)
				if(1*i + 2*j + f*5 + k*10 == s) 
					count++;
	return count;
}