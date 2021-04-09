#include<stdio.h>
#include<stdlib.h>

void allocation(int *ptr,int n);
void input(int *ptr,int n);
void display(int *ptr,int n);

int main(void)
{
    printf("Enter total no of elements : ");
    int n;
    scanf("%i",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    allocation(ptr,n);
    display(ptr,n); 
}

void allocation(int *ptr,int n)
{
    if(ptr == NULL)
    {
        printf("Memory has not been allocated");
        exit(0);
    }
    else
    {
        printf("Memory has been allocated\n");
        input(ptr,n);
    }
}

void input(int *ptr,int n)
{
    printf("Please enter the value : ");
    for(int i=0;i<n;i++)
    {
        scanf("%i",&ptr[i]);
    }
}

void display(int *ptr,int n)
{
    printf("Entered values are : ");
    for(int i=0;i<n;i++)
    {
        printf("%i ",ptr[i]);
    }
}