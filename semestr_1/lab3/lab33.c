/*
filename: lab31.c
author: Filatov E., 515b
creation date: 29.02.2020
lab3, task 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void det(int matr[7][7])
{
    int det;
    det = (matr[1][2]*matr[2][3]*matr[3][4]+matr[2][2]*matr[1][4]*matr[3][3]+matr[1][3]*matr[2][4]*matr[3][2])-(matr[3][2]*matr[2][3]*matr[1][4]+matr[1][2]*matr[2][4]*matr[3][3]+matr[1][3]*matr[2][2]*matr[3][4]);
    printf("sum of subarray is %d\n", det);
}

void func(int n)
{
    static int matr[7][7], sum=0;
    if (n==1)
    {
        for (int i=0; i<7; i++)
        {
            for (int j=0; j<7; j++)
            {
                printf("input element %d %d: ", i, j);
                scanf("%d", &matr[i][j]);
            }
        }
    }
    else
    {
        srand((unsigned)time(NULL));
        for (int i=0; i<7; i++)
        {
            for (int j=0; j<7; j++)
            {
                matr[i][j] = rand()%181-90;
            }
        }        
    }
    for (int j=0; j<7; j++)
        sum += matr[6][j];
    for (int i=1; i<7; i++)
        sum += matr[i][0];
    for (int i=0; i<7; i++)
        printf("%3d %3d %3d %3d %3d %3d %3d\n", matr[i][0], matr[i][1], matr[i][2], matr[i][3], matr[i][4], matr[i][5], matr[i][6]);
    printf("sum of highlighted elements is %d\n", sum);
    det(matr);
}

int main(void)
{
    int n;
    printf("enter 1 for manual or 2 for automatic input: ");
    scanf("%d", &n);
    func(n);
}