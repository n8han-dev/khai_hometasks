
#include <stdio.h>

int main(void)
{
    int f=0, n, a;
    printf("input a: ");
    scanf("%d", &a);
    printf("input  number: ");
    scanf("%d", &n);
    for (int i=0; i<3; i++)
    {
        if (n%10==a)
        {
            f=1;
            break;
        }
        n /= 10;
    }
    if (f)
        printf("a is in number\n");
    else
        printf("a is not in number\n");
    return 0;
}