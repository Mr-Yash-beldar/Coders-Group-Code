/*
    Date--17-09-2022
    Purpose--Print self divider number in given range
*/

#include <stdio.h>
int divider(int);
void print_divider(int, int);
void main()
{
    int start, end;
    printf(" Enter lower limit: ");
    scanf("%d", &start);

    printf(" Enter upper limit: ");
    scanf("%d", &end);

    printf(" All self divider numbers between %d to %d are:\n", start, end);
    print_divider(start, end);
}

// self divider cheker function
int divider(int num)
{
    int n, rem, not = 0;
    n = num;
    while (n != 0)
    {
        rem = n % 10;
        if (rem == 0)
        {
            not = 1;
            break;
        }
        else if (num % rem != 0)
        {
            not = 1;
            break;
        }
        n /= 10;
    }
    if (not == 0)
        return 1;
    else
        return 2;
}

// Numbers printing function
void print_divider(int start, int end)
{
    int Check = 0;
    for (int i = start; i <= end; i++)
    {
        Check = divider(i);
        if (Check == 1)
            printf("%d, ", i);
    }
}