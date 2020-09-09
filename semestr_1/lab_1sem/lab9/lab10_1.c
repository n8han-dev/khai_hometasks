/*
file name: lab10_1.c
creator: Eugene Filatov
creation date: 27.11.2019
*/

#include <stdio.h>

void func(int **arr, int x, int n)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]<&x)
        {
            arr[i] = &x;
        }
    }
}

void print(int **arr, int n)
{
    for (int i=0; i<n; i++)
    {
        printf("element %i is %i\n", i, arr[i]);
    }
}

void input(int **arr, int n)
{
    for (int i; i<n; i++)
    {
        printf("element %i: ", i);
        scanf("%i", arr[i]);
    }
}

int main(void)
{
    int na, nb, nc, A[na], B[nb], C[nc], x;
    printf("input sizes of arrays A, B, C: ");
    scanf("%i%i%i", &na, &nb, &nc);
    printf("input x: ");
    scanf("%i%i%i", &x);
    printf("input array A elements\n");
    input((int **) A, na);
    printf("input array B elements\n");
    input((int **) A, na);
    printf("input array C elements\n");
    input((int **) A, na);
    func((int **) A, x, na);
    func((int **) B, x, nb);
    func((int **) C, x, nc);
    print((int **) A, na);
    print((int **) B, nb);
    print((int **) C, nc);
    return 0;
}

