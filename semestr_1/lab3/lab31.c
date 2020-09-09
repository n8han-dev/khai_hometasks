/*
filename: lab31.c
author: Filatov E., 515b
creation date: 29.02.2020
lab3, task 1
*/

#include <stdio.h>
#include <math.h>

int * prcss(int n)
{
    int ln=(int)ceil(log10(n));
    static int lst[10] = {0};
    for (int i=0; i<ln; i++)
    {
        lst[n%10]++; 
        n/=10;
    }
    return lst;
}


void printer(int *lst)
{
    int f=0;
    for (int i=0; i<10; i++)
    {
        if (lst[i]>1)
        {    f=1;
            break;
        }
    }
    printf("%s\n", f ? "There are repeating digits in number":"There aren't repeating digits in number");
    for (int i=0; i<10; i++)
    {
        if (lst[i]>1)
            printf("%d repeats %d times\n", i, lst[i]);
    }
}


int main(void)
{
    int n, *list;
    printf("input number: ");
    scanf("%d", &n);
    list = prcss(n);
    printer(list);
}
