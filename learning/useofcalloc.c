#include <stdio.h>
#include <stdlib.h>
void main(){
    
    int *ptr;
    int n, i;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n ,sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element:  ", i);
        scanf("%d", &ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("The element at index %d is %d:  \n", i, ptr[i]);
    }
    //default value 0 
}