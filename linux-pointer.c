#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1024

typedef struct {
    char name[MAX_SIZE];
    int age;
} Person;

void print_person(const Person *p)
{
    printf("Name: %s, Age: %d\n", p->name, p->age);
}

int main(void)
{
    Person p = {"Alice", 30};
    print_person(&p);
    return EXIT_SUCCESS;
}
