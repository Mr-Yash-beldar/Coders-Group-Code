
/*
    Date--18-09-2022
    Purpose--reapetation yes or not.
*/
#include <stdio.h>
void main()
{
    int n, num;
    int arr[100];
    printf("Enter your number:  ");
    scanf("%d", &num);
    n = num;
    int i = 0, k = 0, j;
    while (n != 0)
    {
        arr[i] = n % 10;
        n /= 10;
        k++;
        i++;
    }
    int repeat = 0;
    for (int j = 0; j < k; i++)
    {
        for (int m = 0; m < k; j++)
        {
            if (m == j)
                continue;
            else if (arr[j] == arr[j + 1])
                repeat++;
        }
    }
    if (repeat > 0)
        printf("Yes\n");
    else
        printf("No \n");
}