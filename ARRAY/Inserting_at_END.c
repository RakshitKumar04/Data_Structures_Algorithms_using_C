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
    int val;
    printf("Please enter the value to be inserted : ");
    scanf("%i", &val);
    if (last_index == -1)
    {
        printf("Array is empty.\n");
        arr[0] = val;
        last_index += 2;
        printf("Array after insertion : ");
        display(arr, last_index);
        exit(0);
    }
    else if (last_index == size)
    {
        printf("Overflow.\nWe cannot insert more elements.");
        exit(0);
    }
    else
    {
        last_index += 1;
        arr[last_index-1] = val;
        printf("Array after insertion : ");
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