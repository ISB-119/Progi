// Activity selection Составление работ
//
/*  start[] = {10,12,20};
 *  finish[] = {20,25,30};
 *  Task: find max uncros /"work"/
 *  Задание: найти максимальную непересекающуюся работу  Ответ: 4, {0,2 }
 *
 *	start[] = {1,3,0,5,8,5};
 * 	finish[] = {2,4,6,7,9,9};
 *	Ответ: 4, {0,1,3,4}
 *
 *
 *
 *
* */
#include <stdio.h>
#include <stdlib.h>

typedef struct tagACTIVITY
{
    int index, start, finish;
} activity;

int activityCompare(const void * s1, const void * s2)
{
    return (((activity*)s1) -> finish - ((activity*)s2) -> finish);
    //activity s1;
    //activity * s2;
    //s1.finish = 2;
    //s2 -> finish = 2;
}
void printMaxActivities (activity* arr, int n)
{
    qsort(arr, n, sizeof(*arr), activityCompare);
    int i = 0;
    printf("%d: (%d, %d)\n", arr[1].index, arr[i].start, arr[i].finish);
    for (int j = 1; j < n; j++)
    {
        if (arr[j].start >= arr[i].finish){
            printf("%d: (%d, %d)\n", arr[j].index, arr[i].start, arr[j].finish);
            i = j;
        }
    }
}

int main()
{
    activity a[] = {
    {0, 5, 9},
    {1, 1, 2},
    {2, 3, 4},
    {3, 5, 6},
    {4, 8, 3},
    {5, 3, 6}
    };
    int n = sizeof(a)/sizeof(a[0]);
    printMaxActivities(a,n);
    return 0;
}