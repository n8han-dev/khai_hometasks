#include <stdio.h>
#define max 10
int main (void)

{
    int n, mas[max];
    printf("size:");
    scanf_s("%i", &n);

    printf("elemens of matrix:");
    for(int i=0;i<n;i++)
    {
        scanf_s("%i", &mas[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(mas[i]>mas[i+1])
        {
            mas[i]= mas[i+1];
            printf("%6i", mas[i]);
        }
        if(mas[i]<mas[i+1])
        {
            printf("%6i", mas[i]);
        }
    }
    return 0;
}