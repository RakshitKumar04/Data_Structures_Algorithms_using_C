#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void deletion(int arr[], int last_index);
void display(int arr[], int last_index);

int main(void)
{
    int size = 10;
    int arr[size];
    int n;
    printf("Please enter the no. of elements you want to insert in the array : ");
    scanf("%i", &n);
    int last_index = n;
    if (last_index == 0)
    {
        last_index = -1;
    }
    input(arr, n);
    deletion(arr, last_index);
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

void deletion(int arr[], int last_index)
{
    if (last_index == -1)
    {
        printf("Array is empty.\n");
        exit(0);
    }
    else
    {
        for (int i = 0; i <= last_index; i++)
        {
            arr[i] = arr[i + 1];
        }
        last_index--;
        printf("Array after deletion : ");
        display(arr, last_index);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
}