#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *start, int n);
struct node *ll_insert_at_end(struct node *start);
struct node *display_ll(struct node *start);

int main(void)
{
    int n;
    printf("Please enter the length of linked list : ");
    scanf("%i", &n);
    start = create_ll(start, n);
    printf("Linked List : ");
    display_ll(start);
    start = ll_insert_at_end(start);
    printf("Linked List after insertion at end : ");
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

struct node *ll_insert_at_end(struct node *start)
{
    printf("\nPlease enter the value to be inserted at the end : ");
    int val = input();
    struct node *new_node,*ptr;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    ptr=start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next= new_node;
    new_node->next = NULL;
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