#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void insertion(int arr[], int size, int last_index);
void display(int arr[], int last_index);

int main(void)
{
    int size = 10;
    int arr[size];
    int n;
    printf("Please enter the no. of elements you want to insert in the array : ");
    scanf("%i", &n);
    int last_index = n;
    if(last_index == 0)
    {
        last_index=-1;
    }
    input(arr, n);
    insertion(arr, size, last_index);
    return 0;
}

void input(int arr[], int n)
{
    printf("Please enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }
}

void insertion(int arr[], int size, int last_index)
{
    int val,index;
    printf("Please enter the value to be inserted : ");
    scanf("%i", &val);
    printf("Please enter the index no. at which the value is to be inserted : ");
    scanf("%i", &index);
    if (last_index == size)
    {
        printf("Overflow.\nWe cannot insert more elements.");
        exit(0);
    }
    else if(last_index==-1)
    {
       if(index==0)
       {
           arr[0] = val;
           last_index++;
       }
       else
       {
           printf("Error");
       }
    }
    else if (index > last_index+1)
    {
        printf("Error");
    }
    else
    {
        for (int i = last_index; i >= index; i--)
        {
            arr[i+1] = arr[i]; 
        }
        last_index++;
        arr[index] = val;
        display(arr,last_index);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
}