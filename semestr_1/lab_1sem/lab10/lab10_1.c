/*
file name: lab9_1.c
creator: Eugene Filatov
task: find sum of columns im matrix
creation date: 27.11.2019
*/

#include <stdio.h>

void func(int *arr, int x, int n)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]<x)
        {
            arr[i] = x;
        }
    }
    return arr;
}

int main(void)
{
    int na, nb, nc, A[na], B[nb], C[nc];
    printf("input sizes of arrays A, B, C: ");
    scanf("%i%i%i", &na, &nb, &nc);
    printf("input array A elements: ");
    for (int i; i<na; i++)
    {
        
    }
}

