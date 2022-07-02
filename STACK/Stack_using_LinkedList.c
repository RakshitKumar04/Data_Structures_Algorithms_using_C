#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;
struct stack *push(struct stack *top, int val);
struct stack *pop(struct stack *top);
int peek(struct stack *top);
struct stack *display(struct stack *top);

int main(void)
{
    int option, val;
    do
    {
        printf("\n\n***********MAIN MENU***********");
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. PEEK");
        printf("\n4. DISPLAY");
        printf("\n5. EXIT");
        printf("\n\nPlease enter your choice: ");
        scanf("%i",&option);
        switch (option)
        {
        case 1:
            printf("\nPlease enter the no. to be pushed: ");
            scanf("%i",&val);
            top = push(top, val);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            val = peek(top);
            if(val != -1)
            {
                printf("\nNo. at the top of stack: %i",val);
            }
            else
            {
                printf("\n!!! STACK IS EMPTY !!!");
            }
            break;
        case 4:
            top = display(top);
            break;
        case 5:
        break;
        default:
            printf("\nSORRY! Wrong Input.\nPlease enter the correct choice.");
            break;
        }
    } while (option != 5);
    return 0;
}

struct stack *push(struct stack *top, int val)
{
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->data = val;
    if(top == NULL)
    {
        ptr->next = NULL;
        top = ptr;
    }
    else
    {
        ptr->next = top;
        top = ptr;
    }
    return top;
}

struct stack *pop(struct stack *top)
{
    struct stack *ptr = top;
    if(top == NULL)
    {
        printf("\n!!! STACK UNDERFLOW !!!");
    }
    else
    {
        top = top->next;
        printf("\nNo. poped from stack: %i", ptr->data);
        free(ptr);
    }
    return top;
}

int peek(struct stack *top)
{
    if(top == NULL)
    {
        return -1;
    }
    else
    {
        return top->data;
    }
}

struct stack *display(struct stack *top)
{
    struct stack *ptr = top;
    if(top == NULL)
    {
        printf("\n!!! STACK IS EMPTY !!!");
    }
    else
    {
        printf("\n\t+---+");
        while(ptr != NULL)
        {
            printf("\n\t| %i |", ptr->data);
            printf("\n\t+---+");
            ptr = ptr->next;
        }
    }
    return top;
}