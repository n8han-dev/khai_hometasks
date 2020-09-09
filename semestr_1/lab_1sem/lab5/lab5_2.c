/*
filename: lab5_2.c
lab5 task 2
written by: Filatov E.O
task: print value of expression depending on difference between given values 
creation date: 04.10.2019
*/

#include <stdio.h>

short x, a, b, f=1;

int main(void)
{
    printf("input a, b: ");
    scanf("%i%i", &a, &b);
    if ((a==0) || (b==0))
        printf("cant divide by 0\n");
        f = 0;
    if (f==1)
    {
        if (a<b)
            x = b / a - 1;
        if (a==b)
            x = -295;
        else
            x = (a-235)/b;
        printf("x is %i\n", x);
    }
    return 0;
}
