#ifndef PADRE_H
#define PADRE_H
struct padre
{
    int age;
    char name[256];
    char greeting[256];
    int num_kids;
};
struct padre * new_padre(int age, char * name, char * greeting, int num_kids);
void change_padre(struct padre *p);
void print_padre(struct padre *p);
#endif