#include <stdio.h>

double a, b, c, d, left_c, right_c, left_a, right_a;

void assign()
{
    printf("input a: ");
    scanf("%lf", &a);
    printf("input b: ");
    scanf("%lf", &b);
    printf("input c: ");
    scanf("%lf", &c);
    printf("input d: ");
    scanf("%lf", &d);
    a = a/18;
    b = b/19;
    c = c/20;
    printf("a %lf, b %lf, c %lf, d %lf\n", a, b, c, d);
}

void calc_c()
{
    left_c = (a-b) * (c+d);
    right_c = a*c - b*c + a*d - b*d;
    printf("left: %lf; right: %lf\n", left_c, right_c);
}

void assembler()
{
    asm ("vari $1");
    asm ("movl vari, %eax");
    asm ("add $2, %eax");
}

int main(void)
{
    assign();
    calc_c();
    assembler();
    return 0;
}
