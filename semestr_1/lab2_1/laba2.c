/*
filename: lab1-2.c
author: Filatov E., 515b
creation date: 30.01.2020
lab1, task 2
*/
#include <stdio.h>
#include <math.h>
int main(void)
{
 int n, toilet, c;
 char *bunk, *side = "coupe";
 char *comp, comps[][9]={"I", "II", "III", "IV", "V", "VI", "VII","VIII", "IX"};
 printf("input ticket number: ");
 scanf("%d", &n);
 while (n>54 || n<=0) // check for incorrect input
 {
 printf("incorrect ticket number, should not be greater than 54\ninput ticket number: ");
 scanf("%d", &n);
 }
 bunk = (n%2) ? "lower" : "higher"; // higher bunks on places with even numbers
 if (n<36)
 {
 c = (int)round(n/4.0+0.4)-1; // compartment id if in coupe
 /*
 if coupe place we divide ticket number by 4 because 4 seats for
1 coupe and round it to bigger number,
 then retract 1 because id starts from 0 and tickets from 1
 */
 comp = comps[c];
 toilet = (c>=5) ? (2*(9-c)) : (2*c+1);
 //assume conductor's coupe is 1m wide,starting meter count from closest wall to toilet
 }
 else // if not in coupe change compartment number and side
 {
 c = (int)round((n-36)/2.0+0.4); // compartment id if side place
 /*
if coupe place we retract 36 from ticket number then divide ticket
number by 2 because 4 seats for 1 coupe and round it to bigger number,
 then retract 1 because id starts from 0 and tickets from 1
 */
 side = "side";
 comp = comps[8-c];
 toilet = (c>5) ? (2*(9-c)+1) : (2*c);
 }
 printf("%s bunk\n%s place\n%s compartment\n%d meters to closest toilet\n", bunk, side, comp, toilet);
 return 0;
}