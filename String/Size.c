#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50];
    printf("Please enter a string : ");
    gets(str);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length of the string using loop : %i", len);
    int len2 = strlen(str);
    printf("\nLength of the string using inbuilt function : %i", len2);
    return 0;
}