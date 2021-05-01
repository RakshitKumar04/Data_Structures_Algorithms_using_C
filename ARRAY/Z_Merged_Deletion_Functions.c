#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void deletion(int arr[], int last_index);
void display(int arr[], int last_index);

int main(void)
{
    int size = 10;
    int s = 0;
    printf("The size of the array : %i", size);
    printf("\nTo update the size of the array please enter '1' else enter '0'\n");
    scanf("%i", &s);
    if (s == 1)
    {
        printf("Enter the maximum size of the array : ");
        scanf("%i", &size);
    }
    else
    {
        size = 10;
    }
    int arr[size];
    int n;
    printf("Please enter the no. of elements you want to insert in the array of size %i : ", size);
    scanf("%i", &n);
    int last_index = n;
    if (last_index == 0)
    {
        last_index = -1;
    }
    input(arr, last_index);
    deletion(arr, last_index);
    return 0;
}

void input(int arr[], int n)
{
    if (n == -1)
    {
        printf("Array is empty.\n");
        exit(0);
    }
    else
    {
        printf("Please enter the elements of the array : ");
        for (int i = 0; i < n; i++)
        {
            scanf("%i", &arr[i]);
        }
    }
}

void deletion(int arr[], int last_index)
{
    int a;
    int index;
    do
    {
        printf("\n\nPlease enter any one no. to proceed");
        printf("\n1. For Deletion at the Beginning.\n2. For Deletion at the End.\n3. For Deletion at the Index.");
        printf("\nEnter '0' to exit.\n");
        scanf("%i", &a);
        if (a > 0)
        {
            switch (a)
            {
            case 1:
                for (int i = 0; i <= last_index; i++)
                {
                    arr[i] = arr[i + 1];
                }
                last_index--;
                printf("Array after deletion : ");
                display(arr, last_index);
                break;
            case 2:
                last_index--;
                printf("Array after deletion : ");
                display(arr, last_index);
                break;
            case 3:
                printf("Please enter the index no. at which the value is to be deleted : ");
                scanf("%i", &index);
                for (int i = index; i < last_index; i++)
                {
                    arr[i] = arr[i + 1];
                }
                last_index--;
                printf("Array after deletion : ");
                display(arr, last_index);
                break;
            default:
                printf("SORRY!\nWrong Input.");
            }
        }
        else
        {
            exit(0);
        }
    } while (a != 0);
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
}