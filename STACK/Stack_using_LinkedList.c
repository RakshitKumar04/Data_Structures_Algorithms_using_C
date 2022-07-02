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
struct stck *pop(struct stack *);
int peek(struct stack *);

int main(void)
{
    int option;
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
            if(top != -1)
            {
                printf("\nNo. poped from stack: %i",top);
            }
            break;
        case 3:
            int val = peek(top);
            if(val != -1)
            {
                printf("\nNo. at the top of stack: %i",val);
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

struct stack *push(struct stack *, int val)
{

}

struct stck *pop(struct stack *)
{

}

int peek(struct stack *)
{

}