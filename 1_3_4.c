#include <stdio.h>

int main()
{
int n, i, j, mx=0, imx=0, k;
printf("Введите размер массива: ");
scanf("%d", &n);
int arr[n];
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
i=1;
while (i<=n)
if (arr[i]>arr[i-1]) {
j=i;
k=1;
while (arr[j]>arr[j-1] && j<=n) {
j=j+1;
k=k+1;
}
if (k>mx) {
mx=k;
imx=i-1;
}
i=i+k;
} else i=i+1;
if (mx==0) 
printf("Нет участков возрастания\n");
else 
printf("Максимальная последовательность возрастающих чисел %d\n",mx);
return 0;
}
