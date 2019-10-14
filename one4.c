#include <stdio.h>
void main()
{
int a, b, q=0;
scanf("%d",&a);
scanf("%d",&b);
int b1=b;
int r=a;
	while (b1<=a){
	b1*=2;
	}
	while (b1!=b){
	b1/=2;
	q*=2;
	if (r>=b1){
	r=r-b1;
	q=q+1;
	}
}
printf("Частное= %d\n Остаток= %d\n",q,r);
}


