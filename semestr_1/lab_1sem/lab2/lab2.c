/*
filename: lab2.c
lab_task #2

written by: Filatov E.O
task: convert centimiters to feet
creation date: 13.09.2019
*/

#include <stdio.h>
double cm;
double feet;

int main(void)
{
	printf("How many centimiters you wish to convert?\n"); // input cm
	scanf("%lf", &cm);
	if( cm<0) // check if a nuber is not negative
	{
		printf("ERR: negative number\n");
	}
	else
	{
		feet = cm * 0.0328084; // calculate liters 
		printf("So many feet you got: %lg\n", feet); // output feet
	}
    return 0;
}
