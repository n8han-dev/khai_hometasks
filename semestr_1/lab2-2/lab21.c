/*
filename: lab21.c
author: Filatov E., 515b
creation date: 29.01.2020
lab2, task 1
*/

#include <stdio.h>
#include <math.h>

double fy(double x)
{
    double tmp = 1.0/(1+3*x*x*x);
    return tmp;
}

double fs(double x, int n)
{
    double s=0, tmp = -3*x*x*x;
    for (int k=0; k<=n; k++)
        s += pow(tmp, k);
    return s;
}

int main(void)
{
    double a, b, h, n, y=0, s=0;
    printf("input a: ");
    scanf("%lf", &a);
    printf("input b: ");
    scanf("%lf", &b);
    printf("input h: ");
    scanf("%lf", &h);
    printf("input n: ");
    scanf("%lf", &n);
    while (a<=b)
    {
        y = fy(a);
        s = fs(a, n);
        printf("Y(x) is %15.4lf, S(x) is %15.4lf, |Y(x)-S(x)| is %15.4lf\n", y, s, fabs(y-s));
        a += h;
    }
    return 0;
}