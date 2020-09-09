/*
file name: lab10_2.c
creator: Eugene Filatov
task: find sum of columns im matrix
creation date: 27.11.2019
*/

#include <stdio.h>

int even(int n)
{
        if (n%2)
        {
            return 1;
        }
    return 0;
}

int main(void)
{
    int n;
    char b;
    for (int i=0; i<10; i++)
    {
        printf("input number: ");
        scanf("%i", &n);
        if (even(n)==1)
            printf("False\n");
        else
            printf("True\n");
    }
    return 0;

}