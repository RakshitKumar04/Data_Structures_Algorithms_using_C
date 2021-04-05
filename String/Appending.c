#include <stdio.h>
#include <string.h>

int main(void)
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