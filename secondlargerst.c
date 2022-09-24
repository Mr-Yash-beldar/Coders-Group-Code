/*
    Date--16-09-2022
    Purpose--second largest element of array;
*/
#include <stdio.h>
void main()
{
    int n,i,j,temp;
    int result=-1;
    int arr[10];
    printf("Enter limit of array: ");
    scanf("%d", &n);
    printf("Enter %d element in array: ",n);
    
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for ( i = 0; i < n - 1; i++)
    {
        for ( j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
   for( i=0;i<n-1;i++)
   {
    if(arr[i]>arr[i+1])
    {
        if(arr[i+1]==arr[0])
        {
            printf("%d",result);
            break;
        }
        else
        {
        printf("%d",arr[i+1]);
        break;
        }
    }
   }
}
