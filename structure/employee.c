#include <stdio.h>
#include <stdlib.h>

typedef enum Dept
{
    HR,
    OFFICER,
    ADMIN
} department;

typedef struct Address
{
    char city[30];
    char street[30];
} adrs;

typedef struct Employee
{
    char name[30];
    int age;
    adrs address;
    department dept;
} employee;

/// Function Declaration
void set_employee(employee* e);
void get_employee(employee* e);
void search_employee(employee e[],int n,char city[30]);

int main()
{
    int n;
    printf("Enter Number of employee: ");
    scanf("%d",&n);
    getchar();
    employee e[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("INPUT EMPLOYEE #%d\'s INFORMATION: \n\n",i+1);
        set_employee(&e[i]); /// Function invoke
    }
    system("cls");
    char target_city[30];
    printf("Enter city name that you want to search: ");

    gets(target_city);
    search_employee(e,n,target_city);
    return 0;
}

void search_employee(employee e[],int n, char city[30])
{
    int i;
    for(i=0; i<n; i++)
    {
        if(strcmp(e[i].address.city,city)==0)
        {
            printf("EMPLOYEE INFORMATION: \n\n");
            get_employee(&e[i]);
        }
    }
}

/// Function definition
void get_employee(employee* e)
{
    printf("\tEmployee Name: %s\n",e->name);
    printf("\tEmployee Age: %d years\n",e->age);
    printf("\tEmployee Address - City: %s\n",e->address.city);
    printf("\tEmployee Address - Street: %s\n",e->address.street);
    printf("\tEmployee Department: %d\n",e->dept);

}


void set_employee(employee* e)
{
    printf("\tEmployee Name: ");
    gets(e->name);
    printf("\tEmployee Age: ");
    scanf("%d",&e->age);
    getchar();
    printf("\tEmployee Address - City: ");
    gets(e->address.city);
    printf("\tEmployee Address - Street: ");
    gets(e->address.street);
    printf("\tSelect Department:  \n");
    printf("\t\t1. HR\n");
    printf("\t\t2. OFFICER\n");
    printf("\t\t3. ADMIN\n");
again_input:
    printf("\t\tYour Choice: ");
    int d;
    scanf("%d",&d);
    getchar();
    switch(d)
    {
    case 0:
        e->dept = HR;
        break;
    case 1:
        e->dept = OFFICER;
        break;
    case 2:
        e->dept = ADMIN;
        break;
    default:
        printf("Wrong input... try again\n");
        goto again_input;
    }
}
