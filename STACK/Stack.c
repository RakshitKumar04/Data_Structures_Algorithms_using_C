#include <stdio.h>
#include <stdlib.h>

int size=0;
int top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);

int main(void)
{
    printf("Please enter the size of the stack: ");
    scanf("%i",&size);
    int st[size];
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
            push(st,val);
            break;
        case 2:
            val = pop(st);
            if(val != -1)
            {
                printf("\nNo. poped from stack: %i",val);
            }
            break;
        case 3:
            val = peek(st);
            if(val != -1)
            {
                printf("\nNo. at the top of stack: %i",val);
            }
            break;
        case 4:
            display(st);
            break;
        default:
            printf("\nSORRY! Wrong Input.\nPlease enter the correct choice.");
            break;
        }
    } while (option != 5);
    return 0;
}

void push(int st[], int val)
{
    if(top == size-1)
    {
        printf("!!! STACK OVERFLOW !!!");
    }
    else
    {
        top++;
        st[top] = val;
    }
}

int pop(int st[])
{
    int val=0;
    if(top == -1)
    {
        printf("!!! STACK UNDERFLOW !!!");
        return -1;
    }
    else
    {
        val = st[top];
        top--;
        return val;
    }
}

int peek(int st[])
{
    if(top == -1)
    {
        printf("!!! STACK IS EMPTY !!!");
        return -1;
    }
    else
    {
        return(st[top]);
    }
}

void display(int st[])
{
    if(top == -1)
    {
        printf("!!! STACK IS EMPTY !!!");
    }
    else
    {
        printf("\n\t+---+");
        for(int i=top;i>=0;i--)
        {
            printf("\n\t| %i |",st[i]);
            printf("\n\t+---+");
        }
    }
}