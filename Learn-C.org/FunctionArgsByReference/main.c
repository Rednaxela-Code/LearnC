#import <stdio.h>

typedef struct {
    char *name;
    int age;
} person;

typedef struct {
    int x;
    int y;
} point;

void addone(int *n);
void move(point *p);
void move2(point *p);
void birthday(person *p);

int main()
{
    // Example of simple argument by reference.
    int n = 0;
    printf("Before: %d\n", n);
    // Pass the reference to n, not the value itself so the function can edit it effectively.
    addone(&n);
    printf("After: %d\n", n);

    // Write a function called birthday, which adds one to the age of a person.
    person pers;
    pers.name = "Alexander";
    pers.age = 32;
    printf("%d before birthday\n", pers.age);
    birthday(&pers); // reference person witg & to be able to change the sttruct value itself.
    printf("%d after birthday\n", pers.age);

    return 0;
}

void addone(int *n)
{
    // n is a pointer here which point to a memory-adress outside the function scope
    (*n)++; // this will effectively increment the value of n
}

// Dereferencing OLDSCHOOL
void move(point *p)
{
    (*p).x++;
    (*p).y++;
}

// Dereferencing NEWSCHOOL
void move2(point *p)
{
    p->x++;
    p->y++;
}

void birthday(person *p) { p->age += 1; }
