#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n);
void insertion(int arr[], int last_index,int size);
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
    insertion(arr, last_index,size);
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

void insertion(int arr[], int last_index,int size)
{
    int a;
    int index;
    do
    {
        printf("\n\nPlease enter any one no. to proceed");
        printf("\n1. For Insertion at the Beginning.\n2. For Insertion at the End.\n3. For Insertion at the Index.");
        printf("\nEnter '0' to exit.\n");
        scanf("%i", &a);
        if (a > 0)
        {
            int val, index;
            printf("Please enter the value to be inserted : ");
            scanf("%i", &val);
            if (last_index == size)
            {
                printf("Overflow.\nWe cannot insert more elements.");
                exit(0);
            }
            switch (a)
            {
            case 1:
                last_index++;
                for (int i = last_index; i >= 0; i--)
                {
                    arr[i + 1] = arr[i];
                }
                arr[0] = val;
                printf("Array after insertion : ");
                display(arr, last_index);
                break;
            case 2:
                last_index += 1;
                arr[last_index - 1] = val;
                printf("Array after insertion : ");
                display(arr, last_index);
                break;
            case 3:
                printf("Please enter the index no. at which the value is to be inserted : ");
                scanf("%i", &index);
                if (index > last_index + 1)
                {
                    printf("\nError!\nThe insex no is larger then the array size.");
                }
                else
                {
                    for (int i = last_index; i >= index; i--)
                    {
                        arr[i + 1] = arr[i];
                    }
                    last_index++;
                    arr[index] = val;
                    printf("Array after insertion : ");
                    display(arr, last_index);
                }
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