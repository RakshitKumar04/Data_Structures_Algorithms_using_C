#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50], search[50];
    printf("Please enter a string : ");
    gets(str);
    printf("Please enter a substring to be searched : ");
    gets(search);
    puts(str);
    int flag = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == search)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }
}