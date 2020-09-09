/*
filename: lab6_1.c
lab 6 task 1
written by: Filatov E.O
creation date: 22.10.2019
*/

#include <stdio.h>

int n;
float a, b ,res;

int main(void)
{
    printf("input N, a, b: ");
    scanf("%i%f%f", &n, &a, &b);
    switch (n)
    {
    case 1:
        res = a + b;
        printf("sum of a and b is %.3f", res);
        break;
    case 2:
        res = a - b;
        printf("difference of a and b is %.3f", res);
        break;
    case 3:
        res = a * b;
        printf("op of a and b is %f", res);
        break;
    case 4:
        res = a / b;
        printf("division of a and b is %f", res);
        break;
    default:
        printf("wrong input");
        break;
    }
}
