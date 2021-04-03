#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[50], *str2[50];
    printf("Please enter string : ");
    gets(str);
    *str2 = strrev(str);
    printf("Reversed string : ");
    puts(*str2);
}