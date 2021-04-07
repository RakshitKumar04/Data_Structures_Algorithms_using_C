#include <stdio.h>

int main()
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