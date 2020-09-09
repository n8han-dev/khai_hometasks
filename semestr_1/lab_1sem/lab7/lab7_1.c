/*
filename: lab7_1.c
lab 7 task 1
written by: Filatov E.O
creation date: 30.10.2019
*/

#include <stdio.h>

int n, res=1, N;

int main(void)
{
    printf("input ammount N: ");
    scanf("%i", &N);
    for (int i=0; i<N; i++)
    {
        printf("input number: ");
        scanf("%i", &n);
        if (n<0)
            res *= n;
    }
    printf("result is %i\n", res);
    return 0;
}
