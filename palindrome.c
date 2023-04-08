
#include <stdio.h>
#include <string.h>
int pallindrome(char str1[20])
{
    char str2[20];
    int k=strlen(str1);
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
    char str[20];
    printf("Enter Your String: ");
    scanf("%s",&str);
    if(pallindrome(str))
        printf("Palindrome");
    else
        printf("Not Palindrome");
        
}
