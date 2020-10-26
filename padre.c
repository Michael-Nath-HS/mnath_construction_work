// Michael Nath
// Period 10 Systems Level Programming
// Work 09: Construction Work

#include "padre.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_padre(struct padre *p)
{
    printf("Details of Padre %s:\nAge: %d\nNumber of Kids:%d\n%s says: %s\n\n", p->name, p->age, p->num_kids, p->name, p->greeting);
}
struct padre *new_padre(int age, char *name, char *greeting, int num_kids)
{
    struct padre *pads;
    // pads represents a pointer that is of type struct padre

    pads = malloc(sizeof(struct padre));
    // assigns space in heap memory to the pads pointer. It gets as much as the size of the padre struct

    // by using the -> notation, assign the attributes of this struct to the parameters given
    pads->age = age;
    pads->num_kids = num_kids;
    strncpy(pads->name, name, sizeof(pads->name) - 1);
    strncpy(pads->greeting, greeting, sizeof(pads->greeting) - 1);
    return pads;
}

void change_padre(struct padre *p)
{
    p->age = rand();
    p->num_kids = rand();
}