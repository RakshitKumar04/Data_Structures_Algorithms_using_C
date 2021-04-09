#include<stdio.h>
#include<stdlib.h>

void allocation(int *ptr,int n);
void input(int *ptr,int n);
void display(int *ptr,int n);
void fre(int *ptr);
void display_freed(int *ptr,int n);

int main(void)
{
    printf("Enter total no of elements : ");
    int n;
    scanf("%i",&n);
    int *ptr;
    int *ptr2;
    ptr=(int*)malloc(n*sizeof(int));
    ptr2=(int*)calloc(n,sizeof(int));
    printf("\nFOR malloc() FUNCTION");
    allocation(ptr,n);
    display(ptr,n);
    fre(ptr);
    display_freed(ptr,n);
    printf("\n\nFOR calloc() FUNCTION");
    allocation(ptr2,n);
    display(ptr2,n);
    fre(ptr2);
    display_freed(ptr2,n);
}

void allocation(int *ptr,int n)
{
    if(ptr == NULL)
    {
        printf("\nMemory has not been allocated");
        exit(0);
    }
    else
    {
        printf("\nMemory has been allocated");
        input(ptr,n);
    }
}

void input(int *ptr,int n)
{
    printf("\nPlease enter the value : ");
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

void fre(int *ptr)
{
    free(ptr);
}

void display_freed(int *ptr,int n)
{
    printf("\nMemory is freed : ");
    for(int i=0;i<n;i++)
    {
        printf("%i ",ptr[i]);
    }
}