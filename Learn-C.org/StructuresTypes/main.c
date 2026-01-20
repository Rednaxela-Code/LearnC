#include <stdio.h>

struct point {
    int x;
    int y;
};

typedef struct {
    int x;
    int y;
} point_two;

typedef struct {
    char *brand;
    int model;
} vehicle;

int main()
{
    struct point p;
    point_two p2;
    p.x = 10;
    p.y = 5;
    p2.x = 10;
    p2.y = 5;

    vehicle mycar;
    mycar.brand = "Renault";
    mycar.model = 2008;

    // Define a new data structure, named "person", which contains a string (pointer to char) called
    // name, and an integer called age.
    typedef struct {
        char *name;
        int age;
    } person;

    person me;
    me.name = "Alexander";
    me.age = 33;

    printf("Persons name is: %s. Persons age is: %d\n", me.name, me.age);
    return 0;
}
