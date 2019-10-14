#include <stdio.h>
int main()
{
int l=0, r=1, c, n, k;
scanf("%d",&n);
      while(l!=n+1)
      {
      r=(10*r)%n;
      l=l+1;
      }
c=r;
r=(10*r)%n;
k=1;
      while (r!=c)
      {
      r=(10*r)%n;
      k++;
      }
printf("Period= %d\n",k);
return 0;
}


