/*
filename: lab45_1.c
lab5 task 1
written by: Filatov E.O
task: print ammount of positive and negative of given numbers 
creation date: 04.10.2019
*/

#include <stdio.h>

int a, b, c, cnt;

int main(void)
{
    printf("input a, b, c: ");
    scanf("%i%i%i", &a, &b, &c);
    cnt = 0;
    if (a<0)
        cnt += 1;
    if (b<0)
        cnt += 1;
    if (c<0)
        cnt += 1;
    printf("positive numbers: %i, negative numbers: %i\n", 3-cnt, cnt);
    return 0;
}
