#include <stdio.h>

int main()
{
int n, i, j, m, c = 0, k = 0;
printf("Введите размер массива: ");
scanf("%d", &n);
int arr[n];
for (i = 0; i < n; i++)
scanf("%d", &arr[i]);
for (i = 0; i < n - 1; i++)
{
for (j = 0; j < n - i - 1; j++)
{
if (arr[j] > arr[j+1])
{
m = arr[j];
arr[j] = arr[j+1];
arr[j+1] = m;
}
}
}
for (i = 0; i < n; i++)
{
if (c < arr[i])
{
c = arr[i];
k++;
}
}
printf("Итог: %d\n", k);
return 0;
}
