/*
filename: lab5_3.c
lab5 task 3
written by: Filatov E.O
task:  
creation date: 04.10.2019
*/

#include <stdio.h>

double x, y;

int main(void)
{
    printf("input coordinates: ");
    scanf("%lf%lf", &x, &y);
    if ((x*x+y*y>=25)||(x>0)&&(y>0))
        printf("dot is in not range\n");
    else
        printf("dot is in range\n");
    return 0;
}