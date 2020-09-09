/*
filename: lab4.c
lab_task #4

written by: Filatov E.O
task: print min and max values of data types in decimal and hex, form a table 
creation date: 02.10.2019
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int chars = sizeof(CHAR_MAX);
int ucharsz = sizeof(UCHAR_MAX);
int uints = sizeof(UINT_MAX);
int floats = sizeof(FLT_MAX);

int main(void)
{
//вывод таблицы с параметрами типов данных
printf("%-12s%6s%40s%20s%40s%20s\n","Type", "Bytes", "Min dec", "Min hex" , "Max dec", "Max chex");
printf("%-12s%5d%40d%20x%40d%20x\n","Unsigned char", ucharsz, 0, 0, UCHAR_MAX, UCHAR_MAX);
printf("%-12s%6d%40ld%20lx%40ld%20lx\n","Char", chars, CHAR_MIN, CHAR_MIN, CHAR_MAX, CHAR_MAX);
printf("%-12s%6d%40d%20x%40u%20x\n","Unsigned int", uints, 0, 0, UINT_MAX, UINT_MAX);
printf("\n\n %-12s%6s%40s%40s\n", "Type", "Bytes", "Min", "Max");
printf("%-12s%6d%40e%40e\n\n", "float", floats, FLT_MIN, FLT_MAX);
return 0;
}