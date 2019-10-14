#include <stdio.h>
int main()
{
int l=0, r=1;
int c, n, k;
scanf("%d",&n);
while(l!=n+1)
{
r=(10*r)%n;
l++;
}
c=r;
r=(10*r)%n;
k=1;
while (r!=c){
r==(10*r)%n;
k++;
}
printf("Длина периода %d\n",k);
return 0;
}




