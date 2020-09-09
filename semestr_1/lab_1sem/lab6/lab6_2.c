/*
filename: lab6_2.c
lab 6 task 2
written by: Filatov E.O
creation date: 22.10.2019
*/

#include <stdio.h>

int n;

int main(void)
{
    printf("input month number ");
    scanf("%i", &n);
    switch (n)
    {
    case 1:
        printf("First quater");
        break;
    case 2:
        printf("First quater");
        break;
    case 3:
        printf("First quater");
        break;
    case 4:
        printf("Second quater");
        break;
    case 5:
        printf("Second quater");
        break;
    case 6:
        printf("Second quater");
        break;
    case 7:
        printf("Third quater");
        break;
    case 8:
        printf("Third quater");
        break;
    case 9:
        printf("Third quater");
        break;
    case 10:
        printf("Fourth quater");
        break;
    case 11:
        printf("Fourth quater");
        break;
    case 12:
        printf("Fourth quater");
        break;
    default:
        printf("wrong input");
        break;
    }
}
