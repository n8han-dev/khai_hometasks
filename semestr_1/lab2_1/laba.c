/*
filename: lab1-1.c
author: Filatov E., 515b
creation date: 29.01.2020
lab1, task 1
*/
#include <stdio.h>
int inp_check(float kg, float pd)
{
if ((kg<0) || (pd<0))
return 0;
return 1;
}
int main(void)
{
float mk, mp;
int corr_inp;
char *bigger;
printf("input mass in kilos:");
scanf("%f", &mk);
printf("input mass in pounds:");
scanf("%f", &mp);
corr_inp = inp_check(mk, mp);
if (!corr_inp)
{
printf("Incorrect input\n");
return 0;
}
mp *= 0.453592;
if (mp==mk)
{
printf("mass is equal\n");
}
else
{
bigger = (mp<mk) ? "kilos" : "pounds";
printf("mass in %s is bigger\n", bigger);
}
return 0;
}