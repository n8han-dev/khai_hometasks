/*
filename: lab21.c
author: Filatov E., 515b
creation date: 29.01.2020
lab2, task 1
*/

#include <stdio.h>
#include <math.h>


double plus(double a, double b)
{
    return (a==0) ? b : (a + b);
}

double minus(double a, double b)
{
    return (a==0) ? -b : (a - b);
}

double mult(double a, double b)
{
    return (a==0) ? 0 : (a * b);
}

double reduce(double a, double b)
{
    return (a==0) ? 0 : (a / b);
}

double tang(double a)
{
    return tan(a);
}

double powr4(double a)
{
    return a*a*a*a;
}

double div1(double a)
{
    return 1/a;
}

int reset()
{
    return 0;
}

double sqrr(double a)
{
    return sqrt(a);
}

int main(void)
{
    int f=0, o;
    double a=0, b=0, res=0;
    while (1)
    {
        printf("input operation number(0-'+',1-'-', 2-'*', 3-'/', 4-'tg(x)', 5-'pow4(x)', 6-'1/x', 9-'sqrt(x)' 7-'reset', 8-'exit'): ");
        scanf("%d", &o);
        if (o==7)
        {
            f=reset();
            continue;
        }
        if (o==9 && !f)
        {
            printf("input x: ");
            scanf("%lf", &b);
            if (b<0)
            {
                printf("incorrect input: x must be greater than 0\n");
                continue;
            }
            res = sqrr(b);
            printf("result: %lf\n", res);
            f=1;
            continue;
        }
        else if (o==9 && f)
        {
            if (res<0)
            {
                printf("incorrect input: x must be greater than 0\n");
                continue;
            }
            res = sqrr(res);
            printf("result: %lf\n", res);
            continue;
        }
        if (f)
        {
            printf("input second operand: ");
            scanf("%lf", &b);
            if ((o==3 && b==0) || (o==6 && b==0))
            {
            printf("err: division by 0\n");
            return 0;
            }
            switch (o)
            {
            case 8:printf("program ended\n");return 0;
            case 0:res=plus(res,b);break;
            case 1:res=minus(res,b);break;
            case 2:res=mult(res,b);break;
            case 3:res=reduce(res,b);break;
            case 4:res=tang(b);break;
            case 5:res=powr4(b);break;
            case 6:res=div1(b);break;
            default:printf("err: unknown operation\n");break;
            }
        }
        else
        {
            printf("input 2 operands: ");
            scanf("%lf%lf", &a, &b);
            if ((o==3 && b==0) || (o==6 && b==0))
            {
            printf("err: division by 0\n");
            return 0;
            }
            f = 1;
            switch (o)
            {
            case 8:printf("program ended\n");return 0;
            case 0:res=plus(a,b);break;
            case 1:res=minus(a,b);break;
            case 2:res=mult(a,b);break;
            case 3:res=reduce(a,b);break;
            case 4:res=tang(b);break;
            case 5:res=powr4(b);break;
            case 6:res=div1(b);break;
            default:printf("err: unknown operation\n");break;
            }
        }
        a,b=0,0;
        printf("result: %.3lf\n", res);

    }
    return 0;
}