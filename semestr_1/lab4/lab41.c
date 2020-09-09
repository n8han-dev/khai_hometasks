/*
filename: lab41.c
author: Filatov E., 515b
creation date: 24.03.2020
lab4, task 1
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int arr[],int f,int l)
{
    int i, j, pivot, tmp;
    if(f<l)
    {
        pivot=f;
        i=f;
        j=l;
        while(i<j)
        {
            while(arr[i]<=arr[pivot] && i<l)
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j)
            {
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
        }
    }
    tmp=arr[pivot];
    arr[pivot]=arr[j];
    arr[j]=tmp;
    quicksort(arr, f, j-1);
    quicksort(arr, j+1, l); 
    }
}

int main(void)
{
    int l, f;
    printf("input array length: ");
    scanf("%d", &l);
    int arr[l], rev[l];
    printf("inpput array automaticaly(1) or manualy(2): ");
    scanf("%d", &f);
    if (f==1)
    {
        srand((unsigned)time(NULL));
        for (int i=0; i < l; i++)
            arr[i] = rand()%1000-300;
    }
    else
    {
        for (int i=0; i < l; i++)
        {
            printf("input arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
    }
    for (int i=0; i < l; i++)
        printf("%d ", arr[i]);
    printf("\n");
    quicksort(arr, 0, l-1);
    for (int i=0; i<l; i++)
    {
        rev[i]=arr[l-1-i];
    }
    for (int i=0; i < l; i++)
        printf("%d ", rev[i]);
    printf("\n");
    return 0;
}