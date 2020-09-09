/*
filename: lab7_2.c
lab 7 task 1
written by: Filatov E.O
creation date: 30.10.2019
*/

#include <stdio.h>

float m, f, s;
int n;

int main(void)
{
    printf("Input miles, step and ammount of steps: ");
    scanf("%f%f%i", &m, &s, &n);
    do
    {
        f = m * 6076;
        printf("%.2f miles is %.2f feet\n", m, f);
        m += s;
        n--;
    } while (n>0);
    return 0;
}
