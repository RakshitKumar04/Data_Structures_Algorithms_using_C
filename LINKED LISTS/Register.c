#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct student
{
    int roll_no;
    char name[50];
    char fathers_name[50];
    char mothers_name[50];
    char address[200];
    char email_id[50];
    int adhar_no;
    char blood_group[10];
    float height;
    float weight;
};

struct node
{
    struct student data;
    struct node *next;
};

struct node *start = NULL;
struct student input(struct student details);
struct node *create_ll(struct node *start, int n);
struct node *display_ll(struct node *start);
struct student display(struct node *ptr);

int main(void)
{
    char class[5];
    printf("CLASS : ");
    gets(class);
    int strength;
    printf("STRENGTH : ");
    scanf("%i", &strength);
    start = create_ll(start, strength);
    display_ll(start);
    return 0;
}

struct student input(struct student details)
{
    printf("ROLL NO : ");
    scanf("%i", &details.roll_no);
    printf("NAME : ");
    gets(details.name);
    gets(details.name);
    printf("FATHER NAME : ");
    gets(details.fathers_name);
    printf("MOTHER NAME : ");
    gets(details.mothers_name);
    printf("ADDRESS : ");
    gets(details.address);
    printf("EMAIL ID : ");
    gets(details.email_id);
    printf("ADHAR NO. : ");
    scanf("%i", &details.adhar_no);
    printf("BLOOD GROUP : ");
    gets(details.blood_group);
    gets(details.blood_group);
    printf("HEIGHT : ");
    scanf("%f", &details.height);
    printf("WEIGHT : ");
    scanf("%f", &details.weight);
    return details;
}

struct node *create_ll(struct node *start, int n)
{
    struct node *new_node, *ptr;
    while (n != 0)
    {
        struct student details = input(details);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = details;
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

struct node *display_ll(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        display(ptr);
        ptr = ptr->next;
    }
    return start;
}

struct student display(struct node *ptr)
{
    printf("ROLL NO : %i", ptr->data.roll_no);
    printf("\nNAME : ");
    puts(ptr->data.name);
    printf("FATHER NAME : ");
    puts(ptr->data.fathers_name);
    printf("MOTHER NAME : ");
    puts(ptr->data.mothers_name);
    printf("ADDRESS : ");
    puts(ptr->data.address);
    printf("EMAIL ID : ");
    puts(ptr->data.email_id);
    printf("ADHAR NO. : %i", ptr->data.adhar_no);
    printf("\nBLOOD GROUP : ");
    puts(ptr->data.blood_group);
    printf("HEIGHT : %.2f", ptr->data.height);
    printf("\nWEIGHT : %.2f", ptr->data.weight);
}

/*
ROLL NO.    NAME          FATHERS NAME           MOTHERS NAME           ADDRESS                             EMAIL ID        ADHAR NO.   BLOOD GROUP     HEIGHT      WEIGHT
    1       MR. AYUSH     MR. ABHISHEK KUMAR     MRS. SUMAN KUMARI      GANDHI ROAD, ARYA NAGAR, BARAUT.    abc@gmail.com   122344566    B'+'           5.2 ft      72.6 kg 
    2
 */