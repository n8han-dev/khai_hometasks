/*
filename: lab8_1.c
creator: Eugene Filatov
creation date: 14.11.19
task: find min of array elements with even id
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("enter array size: ");
    scanf("%i", &n);
    int A[n];
    for (int i =0; i<n; i++)
    {
        printf("input array element: ");
        scanf("%i", &A[i]);
    }
    int m=A[1];
    for (int i=3; i<n;i+=2)
    {
        if (A[i]<m)
            m = A[i];
    }
    printf("smallest array elementwith even id is %i\n", m);
    return 0;
}

