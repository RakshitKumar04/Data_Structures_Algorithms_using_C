#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[] = "The world quotes an sundown";
    char sub[] = strstr(str,4,5);
    puts(sub);
}