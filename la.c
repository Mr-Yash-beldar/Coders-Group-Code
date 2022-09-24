/*
    Date--17-09-2022
    Purpose--pllindroem swap;
*/
#include <stdio.h>
#include <string.h>
int pallindrome(char str1[20])
{
    int k;
    char str2[20];
    strcpy(str2, str1);
    strrev(str2);
    k = strcmp(str1, str2);
    if (k == 0)
        return 1;
    else
        return 0;
}
void main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int check;
        char str1[20];
        gets(str1);
        check = pallindrome(str1[20]);
    }
}
