#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *ll_create(struct node *start, int n);
struct node *ll_insert_beg(struct node *start, int val);
struct node *ll_insert_end(struct node *start, int val);
void ll_display(struct node *start);

int main(void)
{
    struct node *start = NULL;
    int n;
    printf("Please enter the no. of nodes you want insert : ");
    scanf("%i", &n);
    start = ll_create(start, n);
    ll_display(start);
    return 0;
}

struct node *ll_create(struct node *start, int n)
{
    int val;
    printf("Please enter the values you want to insert : ");
    while (n != 0)
    {
        scanf("%i", &val);
        start = ll_insert_end(start, val);
        n--;
    }
    return start;
}

struct node *ll_insert_beg(struct node *start, int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *ll_insert_end(struct node *start, int val)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = val;
    struct node *ptr = start;
    if (ptr == NULL)
    {
        start = ll_insert_beg(start, val);
        return start;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = NULL;
        return start;
    }
}

void ll_display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (ptr == NULL)
    {
        printf("Their is no node to insert.");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%i->", ptr->data);
            ptr = ptr->next;
        }
    }
}