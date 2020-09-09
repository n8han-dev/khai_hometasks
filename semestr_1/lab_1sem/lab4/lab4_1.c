/*
filename: lab4.c
lab_task #4

written by: Filatov E.O
task: print min and max values of data types in decimal and hex, form a table 
creation date: 02.10.2019
*/

#include <stdio.h>
#include <math.h>

double x, z1, z2, a, b, c;
int f=1;
double sqrt(a), sqrt(b), sqrt(c);

int main(void)
{
    a = x*x-9.0;
    b = x-3.0;
    c = x+3.0;
    printf("input x: ");
    scanf("%lf", &x);
    if ((x-3)<=0)
        printf("error, no root from negative or cant divide by 0");
        f = 0;
    if ((x+3)<0)
        printf("error, no root from negative");
        f = 0;
    if ((x*x-9)<0)
        printf("error, no root from negative");
        f = 0;
    if ((x*x-2*x-3+(x-1)*sqrt(a))==0)
        printf("cant divide by 0");
        f = 0;
    if (f)
        z2 = sqrt(c)/sqrt(b);
        z1 = (x*x+2*x-3+(x+1)*sqrt(a))/(x*x-2*x-3+(x-1)*sqrt(a));
        printf("z1 = %.10e;z2= %.10e\n",z1,z2);
    return 0;
}