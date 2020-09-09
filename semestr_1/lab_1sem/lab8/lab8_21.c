#include <stdio.h>


int produce(int n, int arr[])
{
    int rr=1;
    for (int i=0; i<n; i++)
    {
        if (arr[i]<0)
        {
            rr *= arr[i];
        }
    }
    return rr;
}

int main(void)
{
    int n, arr[n]; 
    printf("input array size: ");
    scanf("%i", &n);
    printf("input array elements:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%i", &arr[i]); 
    }
    int r;
    r = produce(n, arr);
    printf("produce of negatives is %i\n", r);
    return 0;
}