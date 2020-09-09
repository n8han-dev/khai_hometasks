/*
filename: lab1-3.c
author: Filatov E., 515b
creation date: 31.01.2020
lab1, task 1
*/
#include <stdio.h>
#include <math.h>
int inp_check(int flat)
{
 if ((flat<=0)||(flat>72))
 return 0;
 return 1;
}
int main(void)
{
 int flat, corr_inp, porch, floor, rooms, balconies, fn;
 printf("input flat number: ");
 scanf("%d", &flat);
 corr_inp = inp_check(flat);
 if (!corr_inp)
 {
 printf("incorrect input\n");
 return 0;
 }
 porch = (flat>36) ? 2 : 1;
 floor = (int)round((flat-(porch-1)*36)/4.0+0.4);
 fn = 4-flat%4;
 rooms = (fn==2) ? 6 : 5; // not counting WC, bathroom,etc.
 balconies = (fn==2) ? 3 : 2;
 printf("porch: %d\nfloor: %d\nrooms: %d\nbalconies: %d\n", porch, floor, rooms, balconies);
 return 0;
}