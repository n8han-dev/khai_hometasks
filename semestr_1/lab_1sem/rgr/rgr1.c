
#include <stdio.h>
#include <math.h>

int main(void)
{
    float h, s=-3, f=6, res;
    printf("input step: ");
    scanf("%f", &h);
    while (h<0)
    {
        printf("please input positive h: ");
        scanf("%f", &h);
    }
    while (s<=f)
    {
        if ((s>=-3)&&(s<-1))
            res = -s-2;
        if ((s>=-1)&&(s<0))
            res = sqrt(1-s*s) - 1;
        if ((s>=0)&&(s<2))
            res = sqrt(4-s*s) + 2;
        if ((s>=2)&&(s<4))
            res = -1;
        if ((s>=4)&&(s<=6))
            res = (s/2)-3;
        printf("%f\n", res);
        s += h;
    }
    return 0;
}
