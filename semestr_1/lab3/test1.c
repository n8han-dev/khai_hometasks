
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    int n, f, sid, eid, res=0;
    printf("enter array size: ");
    scanf("%d", &n);
    int lst[n];
    printf("enter manualy(1) or automatically(2): ");
    scanf("%d", &f);
    if (f==1)
    {
        for (int i = 0; i < n; i++) 
        {
            printf("input element %d: ", i);
            scanf("%d", &lst[i]);
        }
    }
    else
    {
        srand((unsigned)time(NULL));
        for (int i = 0; i < n; i++) 
            lst[i] = rand()%501-250;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", lst[i]);
    printf("\n");
    for (int i = 0; i <= n; i++) 
        if (lst[i]==0)
        {
            sid = i;
            break;
        }
    for (int i = n; i >= 0; i--) 
        if (lst[i]==0)
        {
            eid = i;
            break;
        }
    for (int i=sid; i<eid; i++)
            res += lst[i];
    printf("sum between 0's is %d\n", res);
    return 0;
}