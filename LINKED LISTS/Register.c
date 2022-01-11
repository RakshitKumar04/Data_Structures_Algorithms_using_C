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

char class[5];
FILE *fp;
struct node *start = NULL;
struct student input(struct student details);
struct node *create_ll(struct node *start, int n);
struct node *display_ll(struct node *start);
struct student display(struct node *ptr);

int main(void)
{
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
    fp = fopen(class, "w+");
    fprintf(fp, "\t\t\t***************************************************** CLASS: %s *****************************************************",class);
    fprintf(fp, "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    fprintf(fp, "\n| %-8s | %-24s | %-24s | %-24s | %-36s | %-36s | %-12s | %-11s | %-6s | %-6s |", "ROLL NO.", "NAME", "FATHERS NAME", "MOTHERS NAME", "ADDRESS", "EMAIL ID", "ADHAAR NO.", "BLOOD GROUP", "HEIGHT", "WEIGHT");
    fprintf(fp, "\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
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
    fprintf(fp, "\n| %-8i | %-24s | %-24s | %-24s | %-36s | %-36s | %-12i | %-11s | %-6.2f | %-6.2f |", ptr->data.roll_no, ptr->data.name, ptr->data.fathers_name, ptr->data.mothers_name, ptr->data.address, ptr->data.email_id, ptr->data.adhar_no, ptr->data.blood_group, ptr->data.height, ptr->data.weight);
}