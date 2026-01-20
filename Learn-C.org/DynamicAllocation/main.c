#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *name;
    int age;
} person;

typedef struct {
    int x;
    int y;
} point;

int main()
{
    // person *myperson = (person *)malloc( // Oldschool strict not recommended, typecast the void
    // pointer to type.
    // sizeof(person)); // This gives problems when changing the type.
    // person *myperson = malloc(sizeof(person)); // Normal good practice, allocate room for a
    // person.
    person *myperson =
        malloc(sizeof(*myperson)); // Best practice, allocate room for the pointer to the person.
    //
    // Accessing the person is still the same. with -> because pointer.
    myperson->name = "Alexander";
    myperson->age = 33;

    printf("%s's age is %d\n", myperson->name, myperson->age);
    // Free the memory with the free function.
    free(myperson);
    point *mypoint = malloc(sizeof(*mypoint));

    mypoint->x = 10;
    mypoint->y = 5;
    printf("mypoint coordinates: %d, %d\n", mypoint->x, mypoint->y);

    return 0;
}
