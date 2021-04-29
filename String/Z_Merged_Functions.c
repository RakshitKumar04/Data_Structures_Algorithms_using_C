#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    do
    {
        /* code */
    } while (/* condition */);
    
}

appending()
{
    char des_str[50];
    printf("Please enter a destination string : ");
    gets(des_str);
    char sou_str[50];
    printf("Please enter the source string : ");
    gets(sou_str);
    strcat(des_str,sou_str);
    printf("Appending using inbuilt function : ");
    puts(des_str);
}

comparing()
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

inserting()
{
    char sent[100];
    printf("Please enter a sentence : ");
    gets(sent);
    char substr[50];
    printf("Enter the string to be inserted : ");
    gets(substr);
    int pos;
    printf("Enter the position at which the string has to be inserted : ");
    scanf("%i", &pos);
    int i = 0, j = 0, k = 0;
    char comp_str[100];
    while (sent[i] != '\0')
    {
        if (i == pos)
        {
            while (substr[k] != '\0')
            {
                comp_str[j] = substr[k];
                j++;
                k++;
            }
        }
        else
        {
            comp_str[j] = sent[i];
            j++;
        }
        i++;
    }
    comp_str[j] = '\0';
    printf("The new string is : ");
    puts(comp_str);
    return 0;
}

reversing()
{
    char str[50], *str2[50];
    printf("Please enter string : ");
    gets(str);
    *str2 = strrev(str);
    printf("Reversed string : ");
    puts(*str2);
}

size() 
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
    return 0;
}

substring()
{
    char str[100], substr[100];
    int i = 0, j = 0, n = 0, m;
    printf("\n Enter the main string : ");
    gets(str);
    printf("\n Enter the position from which to start the substring: ");
    scanf("%d", &m);
    printf("\n Enter the length of the substring: ");
    scanf("%d", &n);
    i = m;
    while (str[i] != '\0' && n > 0)
    {
        substr[j] = str[i];
        i++;
        j++;
        n=n-1;
    }
    substr[j] = '\0';
    printf("\n The substring is : ");
    puts(substr);
    return 0;
}

upper_lower()
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
    printf("String in upper case : ");
    puts(upper);
    printf("String in lower case : ");
    puts(lower);
}