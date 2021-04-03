#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50], str2[50];
    printf("Please enter 1st string : ");
    gets(str);
    printf("Please enter 2nd string : ");
    gets(str2);
    int len = strlen(str);
    int len2 = strlen(str2);
    if (len == len2)
    {
        int res = strcmp(str,str2);
        if (res == 0)
        {
            printf("Strings are equal.");
        }
        else
        {
            printf("Strings are not equal.");
        }
    }
    else
    {
        printf("Strings are not equal.");
    }
}