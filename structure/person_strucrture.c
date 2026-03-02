#include <stdio.h>
#include <stdlib.h>

typedef struct Address {
    int holding;
    char street[30];
    char area[30];
    char division[30];
    int postcode;
}home;

typedef struct Person {
    char name[30];
    char nid[30];
    char job[30];
    home address;
}person;

void set_person(person* p);
void get_person(person* p);


int main()
{
    person p;
    set_person(&p);
    system("cls");
    get_person(&p);
    return 0;
}

void get_person(person* p)
{

}

void set_person(person* p) {
    gets(p->name);
    gets(p->nid);
    gets(p->job);
    scanf("%d",&p->address.holding);
    getchar();
    gets(p->address.street);
    gets(p->address.area);
    gets(p->address.division);
    scanf("%d",&p->address.postcode);
}
