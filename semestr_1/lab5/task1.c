/*
filename: t1.c
author: Filatov E., 515b
creation date: 15.04.2020
lab5, task 1
*/


#include <stdio.h>

int func(int ser_num, int *p, int *y, int *m)
{
    *y = ser_num / 100000;
    *m = (ser_num / 1000) % 100;
    if (m==0||*m>12)
        return 0;
    *p = ser_num % 1000;
    return 1;
}

int main(void)
{
    int ser_num, p, y, m, f;
    printf("input serial number: ");
    scanf("%d", &ser_num);
    if (ser_num<0)
    {
        printf("Err: negative serial number\n");
        return 0;
    }
    f = func(ser_num, &p, &y, &m);
    if (!f)
    {
        printf("Err: incorrect data\n");
        return 0;
    }
    printf("year: %d\nmonth: %d\nserial number: %d\n", y, m, p);
    return 0;
}