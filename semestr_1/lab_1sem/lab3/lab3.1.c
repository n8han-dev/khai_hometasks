/*
lab_task #3.1
written by: Filatov E.O.
task: find distance between 2 cars moving towards each other
creation date: 20.09.2019
*/

#include <stdio.h>
#include <math.h>
double v1, v2, t, s, r;

int main(void)
{
    printf("input speed 1, speed 2, distance and time:\n");
    scanf("%lf%lf%lf%lf", &v1, &v2, &s, &t);
    if(s<0||t<0||v1<0||v2<0)
    {
        printf("ERR incorrect input: negative number\n");
    }
    else
    {
        r = fabs(s - (v1+v2)*t);
        printf("distance between cars is %lg\n", r);
    }
    return 0;
}
