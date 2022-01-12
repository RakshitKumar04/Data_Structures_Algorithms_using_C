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

FILE *fp;
struct node *start = NULL;
void input();
struct student input_ll(struct student details);
struct node *create_ll(struct node *start, int n);
void display_IO(struct node *start,char *class,char *school_name,int strength,char *class_teacher);
struct node *display_ll(struct node *start);
struct student display_table(struct node *ptr);

int main(void)
{
    input(); 
    return 0;
}

void input()
{
    char school_name[100];
    printf("SCHOOL NAME: ");
    gets(school_name);
    char class[5];
    printf("CLASS: ");
    gets(class);
    char class_teacher[24];
    printf("CLASS TEACHER: ");
    gets(class_teacher);
    int strength;
    printf("STRENGTH: ");
    scanf("%i", &strength);
    start = create_ll(start, strength);
    display_IO(start,class,school_name,strength,class_teacher);
}

struct node *create_ll(struct node *start, int n)
{
    struct node *new_node, *ptr;
    while (n != 0)
    {
        struct student details = input_ll(details);
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

struct student input_ll(struct student details)
{
    printf("\n----------------------------------------------------------------------------------------");
    printf("\n\n\tROLL NO.: ");
    scanf("%i", &details.roll_no);
    printf("\tNAME: ");
    gets(details.name);
    gets(details.name);
    printf("\tFATHER NAME: ");
    gets(details.fathers_name);
    printf("\tMOTHER NAME: ");
    gets(details.mothers_name);
    printf("\tADDRESS: ");
    gets(details.address);
    printf("\tEMAIL ID: ");
    gets(details.email_id);
    printf("\tADHAR NO.: ");
    scanf("%i", &details.adhar_no);
    printf("\tBLOOD GROUP: ");
    gets(details.blood_group);
    gets(details.blood_group);
    printf("\tHEIGHT: ");
    scanf("%f", &details.height);
    printf("\tWEIGHT: ");
    scanf("%f", &details.weight);
    printf("\n----------------------------------------------------------------------------------------");
    return details;
}

void display_IO(struct node *start,char *class,char *school_name,int strength,char *class_teacher)
{
    strcat(class,".txt");
    fp = fopen(, "w+");
    fprintf(fp, "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%s",school_name);
    fprintf(fp, "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    fprintf(fp, "\n\t\t\t\t\t\t\t\t###################################################### CLASS: %s ######################################################",class);
    fprintf(fp, "\n\t\t\tSTRENGTH: %-130i",strength);
    fprintf(fp, "CLASS TEACHER: %s",class_teacher);
    fprintf(fp, "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    fprintf(fp, "\n| %-8s | %-24s | %-24s | %-24s | %-36s | %-36s | %-12s | %-11s | %-6s | %-6s |", "ROLL NO.", "NAME", "FATHERS NAME", "MOTHERS NAME", "ADDRESS", "EMAIL ID", "ADHAAR NO.", "BLOOD GROUP", "HEIGHT", "WEIGHT");
    fprintf(fp, "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    display_ll(start);
    fprintf(fp, "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
}

struct node *display_ll(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        display_table(ptr);
        ptr = ptr->next;
    }
    return start;
}

struct student display_table(struct node *ptr)
{
    fprintf(fp, "\n| %-8i | %-24s | %-24s | %-24s | %-36s | %-36s | %-12i | %-11s | %-6.2f | %-6.2f |", ptr->data.roll_no, ptr->data.name, ptr->data.fathers_name, ptr->data.mothers_name, ptr->data.address, ptr->data.email_id, ptr->data.adhar_no, ptr->data.blood_group, ptr->data.height, ptr->data.weight);
}