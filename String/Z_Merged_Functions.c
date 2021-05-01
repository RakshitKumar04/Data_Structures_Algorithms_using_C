#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void appending();
void comparing();
void inserting();
void reversing();
void size();
void substring();
void upper_lower();

int main(void)
{
    int a;
    do
    {
        printf("\nPlease enter any one no. to proceed");
        printf("\n1. For Appending two strings.\n2. For comparing two strings.\n3. For inserting a string at a specific position.");
        printf("\n4. For reversing a string.\n5. To find the size of the string.\n6. For extracting a substring.\n7. For converting upper case to lower case and vice versa.\nEnter '0' to exit.\n");
        scanf("%i", &a);
        if (a > 0)
        {
            switch (a)
            {
            case 1:
                appending();
                break;
            case 2:
                comparing();
                break;
            case 3:
                inserting();
                break;
            case 4:
                reversing();
                break;
            case 5:
                size();
                break;
            case 6:
                substring();
                break;
            case 7:
                upper_lower();
                break;
            default:
                printf("SORRY!\nWrong Input.");
            }
        }
        else
        {
            exit(0);
        }
    } while (a != 0);
    return 0;
}

void appending()
{
    char des_str[50];
    char sou_str[50];
    printf("Please enter a destination string : ");
    gets(des_str);
    printf("Please enter the source string : ");
    gets(sou_str);
    int i, j = 0;
    int len = strlen(des_str);
    while (sou_str[j] != '\0')
    {
        des_str[len] = sou_str[j];
        len++;
        j++;
    }
    des_str[len] = '\0';
    printf("String after appending : ");
    puts(des_str);
}

void comparing()
{
    char str[50], str2[50];
    printf("Please enter 1st string : ");
    gets(str);
    printf("Please enter 2nd string : ");
    gets(str2);
    int len = strlen(str);
    int len2 = strlen(str2);
    int i, same = 0;
    if (len == len2)
    {

        printf("Strings are equal.");
    }
    else
    {
        printf("Strings are not equal.\n");
        if (len > len2)
        {
            printf("First strings is greater than second string.");
        }
        else
        {
            printf("Second strings is greater than first string.");
        }
    }
}

void inserting()
{
    char sent[100];
    printf("Please enter a sentence : ");
    gets(sent);
    char substr[50];
    printf("Enter the string to be inserted : ");
    gets(substr);
    strcat(substr, " ");
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
}

void reversing()
{
    char str[50];
    printf("Please enter string : ");
    gets(str);
    int i = 0;
    int j = strlen(str) - 1;
    while (i < j)
    {
        char temp;
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    printf("Reversed string : ");
    puts(str);
}

void size()
{
    char str[50];
    printf("Please enter a string : ");
    gets(str);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("Length of the string : %i", len);
}

void substring()
{
    char str[100], substr[100];
    int i = 0, j = 0, n = 0, m;
    printf("Enter the main string : ");
    gets(str);
    printf("Enter the position from which to start the substring : ");
    scanf("%d", &m);
    printf("Enter the length of the substring : ");
    scanf("%d", &n);
    i = m;
    while (str[i] != '\0' && n > 0)
    {
        substr[j] = str[i];
        i++;
        j++;
        n = n - 1;
    }
    substr[j] = '\0';
    printf("\n The substring is : ");
    puts(substr);
}

void upper_lower()
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