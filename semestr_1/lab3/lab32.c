/*
filename: lab31.c
author: Filatov E., 515b
creation date: 29.02.2020
lab3, task 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int n, f, min, mid, res=0;
    printf("enter array size: ");
    scanf("%d", &n);
    int lst[n];
    printf("enter manualy(1) or automatically(2): ");
    scanf("%d", &f);
    if (f==1)
    {
        for (int i = 0; i < n; i++) 
        {
            printf("input element %d: ", i);
            scanf("%d", &lst[i]);
        }
    }
    else
    {
        srand((unsigned)time(NULL));
        for (int i = 0; i < n; i++) 
            lst[i] = rand()%501-250;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", lst[i]);
    printf("\n");
    min = lst[0];
    for (int i = 1; i <= n; i++) 
        if (lst[i] < min)
        {
            min = lst[i];
            mid = i;
        }
    for (int i=0; i<mid; i++)
    {
        if (lst[i]<0)
            res += lst[i];
    }
    printf("sum of negative numbers before minimum is %d\n", res);
    return 0;
}