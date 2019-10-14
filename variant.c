#include <stdio.h>

int main()
{
int *a,n,i,c, mas[10]={0};
	scanf("%d",&n);
	printf("\n");
a=new int[n];
	for(int i=0;i<n;i++){
a[i]=rand()%10;
	printf("%d ",a[i]);
	printf("\n");
mas[a[i]]++;
}
c=0;
	for(i=0;i<10,i++);
	if(mas[i]>1){
count+=mas[i];}
	printf("Количество различных элементов %d\n", n-count);
return 0;
}
