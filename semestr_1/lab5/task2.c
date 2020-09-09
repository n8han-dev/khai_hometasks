/*
filename: t1.c
author: Filatov E., 515b
creation date: 15.04.2020
lab5, task 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(int arr[], int l)
{
    int *max1, *max2, sarr[l-1];
    max1 = arr;
    *max1 = *arr;
    for (int c = 1; c < l; c++)
    {
        if (*(arr+c) > *max1)
        *max1 = *(arr+c);
    }
    for (int i=0; i<l; i++)
    {
        if (*max1 != arr[i])
            sarr[i] = arr[i];
    }
    max2 = sarr;
    *max2 = *sarr;
    for (int c = 1; c < l-1; c++)
    {
        if (*(sarr+c) > *max2)
        *max2 = *(sarr+c);
    }
    printf("biggest numbers of array are: %d %d\n", *max2, *max1);
}

int main(void)
{
    int len, f;
    printf("input length of array: ");
    scanf("%d", &len);
    int arr[len];
    printf("inpput array automaticaly(1) or manualy(2): ");
    scanf("%d", &f);
    if (f==1)
    {
        srand((unsigned)time(NULL));
        for (int i=0; i < len; i++)
            arr[i] = rand()%1000;
        printf("elements of array:\n");
        for (int i=0; i<len; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    else
    {
        for (int i=0; i<len; i++)
        {  
            printf("input array element %d: ", i+1);
            scanf("%d", &arr[i]);
        }
    }
    func(arr, len);
}