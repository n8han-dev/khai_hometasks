/*
lab_task #3
written by: Filatov E.O
task: find distance between 3 dots on the numerical axis
creation date: 20.09.2019
*/

#include <stdio.h>
#include <math.h>
double a, b, c, d1, d2;

int main(void)
{
    printf("input 3 dots:\n");
    scanf("%lf%lf%lf", &a, &b, &c);
    d1 = fabs(a-c);
    d2 = fabs(b-c);
    printf("distance between A and C is %lg\ndistance between B and C is %lg\n", d1, d2);
    return 0;
}
