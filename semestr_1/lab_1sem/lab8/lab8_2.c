/*
filename: lab8_1.c
creator: Eugene Filatov
creation date: 14.11.19
task: find produce of all negative elements in array and moove all of them to the end of array
*/

#include <stdio.h>
#include <string.h>


void move_el(int arr[], int n) 
{ 
    int temp[n]; 
    int j = 0; 
    for (int i = 0; i < n ; i++) 
        if (arr[i] >= 0 ) 
            temp[j++] = arr[i]; 

    if (j == n || j == 0) 
        return; 
  
    for (int i = 0 ; i < n ; i++) 
        if (arr[i] < 0) 
            temp[j++] = arr[i]; 
  
    memcpy(arr, temp, sizeof(temp)); 
} 

int main() 
{
    int n, arr[n]; 
    printf("input array size: ");
    scanf("%i", &n);
    printf("input array elements:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%i", &arr[i]); 
    }
    move_el(arr, n);
    for (int i = 0; i<n; i++) 
       printf("el %i: %i\n", i, arr[i]);
    return 0; 
} 
