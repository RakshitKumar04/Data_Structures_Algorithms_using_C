#include <stdio.h>

int main(void)
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