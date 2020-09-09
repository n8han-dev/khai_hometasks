/*
file name: lab9_1.c
creator: Eugene Filatov
task: find sum of columns im matrix
creation date: 27.11.2019
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 4

void sumofcol(int **matr)
{
    for (int i=0; i<size; i++)
    {
        int s=0;
        for (int j; j<size; j++)
        {
            s += matr[j][i];
        }
        printf("sum of column %i is %i\n", i, s);
    }
}

void print(int **matr)
{
    for (int i=0; i<size; i++)
        {
            for (int j=0; j<size; j++)
            {
                printf("%i ", matr[i][j]);
            }
            printf("\n");
        }   
}

int main(void)
{
    int matr[size][size];
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size; j++)
        {
            printf("input element %i %i: ", i, j);
            scanf("%i", &matr[i][j]);
        }
    }
    int sum = 0;
    sumofcol((int **)matr);
    return 0;
}

