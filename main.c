// Michael Nath
// Period 10 Systems Level Programming
// Work 09: Construction Work

#include "padre.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
    struct padre *abuelo;
    int age;
    int num_kids;
    char *name = "Joaquin";
    char *greeting = "A ver...";

    // randomizing age and number of kids
    srand(time(NULL));
    age = rand();
    num_kids = rand();
    abuelo = new_padre(age, name, greeting, num_kids);
    print_padre(abuelo);
    printf("Padre %s is undergoing a mutation..\nPadre wants to reintroduce himself!\n\n", abuelo->name);
    change_padre(abuelo);
    print_padre(abuelo);
    free(abuelo);
    return 0;
}