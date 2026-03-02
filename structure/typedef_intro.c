#include <stdio.h>

typedef struct Company {
    char name[30];
    int ranking;
}company;

typedef struct Mobile {
    company brand;
    char model[30];
    int ram,storage;
    double price;
}mobile;

typedef struct Laptop {
    company brand;
    char model[30];
    int ram,storage;
    char cpu[50];
    double price;
}mobile;

int main()
{
    int x;
    mobile m1;
    m1.price = 120000;
    strcpy(m1.brand.name,"Samsuddin");
    printf("%s\n",m1.brand.name);
    return 0;
}
