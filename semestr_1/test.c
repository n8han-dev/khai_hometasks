#include <stdio.h>
#include <math.h>
int power(int x, long n) 
 {
    if(n == 0) 
    return 1.0;
    if(n < 0) 
    return 1.0 / (x * power (1.0 / x, n + 1));
    return x * power(x, n - 1);
 }

int main() 
{
    int sum=0, x, p;
    double m;
    scanf ("%d %d", &x, &p);
    m = pow(x, p);
    printf("%lf\n", m);
    while(m>0)    
    {    
        sum += (int) m%10;   
        m/=10;    
    }    
    printf("Sum is=%d\n",sum); 
}