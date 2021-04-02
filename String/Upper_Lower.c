#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[50];
    printf("Please enter a string : ");
    gets(str);
    int i = 0;
    char upper[50], lower[50];
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            upper[i] = str[i] - 32; //LC -> UC we need to sub 32
        }
        else
        {
            upper[i] = str[i];
        }
        i++;
    }
    upper[i] = '\0'; //initializing empty space with null
    int j = 0;
    while (str[j] != '\0')
    {
        if (str[j] >= 'A' && str[j] <= 'Z')
        {
            lower[j] = str[j] + 32; //UC -> LC we need to add 32
        }
        else
        {
            lower[j] = str[j];
        }
        j++;
    }
    lower[j] = '\0'; //initializing empty space with null
    printf("String in upper case using logic : ");
    puts(upper);
    printf("String in lower case using logic : ");
    puts(lower);
    printf("String in upper case using built in function : ");
    for (int i = 0; i < strlen(str); i++)
    {
        putchar(toupper(str[i]));
    }
    printf("\nString in lower case using built in function : ");
    for (int i = 0; i < strlen(str); i++)
    {
        putchar(tolower(str[i]));
    }
}