#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *start, int n);
struct node *ll_insert_before_given_node(struct node *start);
struct node *display_ll(struct node *start);

int main(void)
{
    int n;
    printf("Please enter the length of linked list : ");
    scanf("%i", &n);
    start = create_ll(start, n);
    printf("Linked List : ");
    display_ll(start);
    start = ll_insert_before_given_node(start);
    printf("Linked List inserting after a given node : ");
    display_ll(start);
    return 0;
}

int input()
{
    int num;
    scanf("%i", &num);
    return num;
}

struct node *create_ll(struct node *start, int n)
{
    struct node *new_node, *ptr;
    printf("Please enter the number : ");
    while (n != 0)
    {
        int val = input();
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = val;
        if (start == NULL)
        {
            start = new_node;
            new_node->next = NULL;
        }
        else
        {
            ptr = start;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = NULL;
        }
        n--;
    }
    return start;
}

struct node *ll_insert_before_given_node(struct node *start)
{
    struct node *new_node, *ptr, *preptr;
    printf("\nPlease enter the value to be inserted : ");
    int val = input();
    printf("Enter the value before which the data has to be inserted : ");
    int node = input();
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    ptr = start;
    while (ptr->data != node)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = new_node;
    new_node->next = ptr;
    return start;
}

struct node *display_ll(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    return start;
}