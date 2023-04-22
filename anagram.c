//Check string is anagram or not
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];

    printf("\nEnter str1:");
    scanf("\n%s", a);

    printf("\nEnter str2:");
    scanf("\n%s", b);

    int len1 = strlen(a);
    int len2 = strlen(b);

    char c[len1], d[len2];

    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            c[i] = toupper(a[i]);
        }
        for (int i = 0; i < len1; i++)
        {
            d[i] = toupper(b[i]);
        }
        int sum1 = 0;
        for (int i = 0; i < len1; i++)
        {
            sum1 = sum1 + c[i];
        }

        int sum2 = 0;
        for (int i = 0; i < len1; i++)
        {
            sum2 = sum2 + d[i];
        }

        if (sum1 == sum2)
        {
            printf("Anagram: yes");
        }
        else
        {
            printf("Anagram: not");
        }
    }
    else
    {
        printf("Anagram: not");
    }
    return 0;
}