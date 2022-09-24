/*
    Date--17-09-2022
    Purpose--To check number is self dividing or not
*/
#include <stdio.h>
void main()
{
    int n, rem, num,not=0;
    printf("Enter Number :   ");
    scanf("%d",&num);
    n=num;
    while (n > 0)
    {
        rem = n % 10;
        if(rem==0)
        {
          not=1;
          break;
        }
        if(num%rem!=0)
        {
            not=1;
            break;
        }
        n /= 10;
    }
    if(not==0)
    printf("Number Is self Divider");
    else
    printf("Number is not self divider");
}