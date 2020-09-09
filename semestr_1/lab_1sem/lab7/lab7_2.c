/*
filename: lab7_2.c
lab 7 task 1
written by: Filatov E.O
creation date: 30.10.2019
*/

#include <stdio.h>
#include <math.h>

double s, e, res, sn;

int main(void)
{
    printf("step is 1, tabulating f(x) = x - sin(x) from -20 to 20\n");
    s = -20.0;
    e = 20.0;
    while (s<e)
    {
        sn = sin(s);
        res = s - sn;
        printf("x=%.3f; y=%.3f\n", s, res);
        s++;
    }
    return 0;
}