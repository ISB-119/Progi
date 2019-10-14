#include <stdio.h>
int main()
{
int n,k=0,i;
scanf("%d",&n);
for (i=2;i<=n;i++)
	{
	if(n%i==0){
	k++;//Cчетчик того сколько раз число поделилось без остатка
	}}
	if(k==1){
	printf("%d-простое\n",n);
	}
	else{
	printf("%d-не простое\n",n);
	}
return 0;
}
	
