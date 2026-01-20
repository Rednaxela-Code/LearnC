#include <stdio.h>

int main()
{
    // This returns J
    char *name = "John";           // Character array on stack.
    char *first_letter = &name[0]; // Dereferncing
    printf("%c\n", *first_letter); // Printing the first letter.

    // define a local variable a
    int a = 1;

    // define a pointer variable, and point it to a using the & operator
    int *pointer_to_a = &a;

    *pointer_to_a += 1; // Dereferencing again, but we can change the value.

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n",
           *pointer_to_a); // Dereferencing here using the * Dereferncing operator

    // Create a pointer to the local variable n called pointer_to_n, and use it to increase the
    // value of n by one.
    int n = 0;
    int *pointer_to_n = &n;

    printf("pointer_to_n starts with the value of: %d\n", *pointer_to_n);

    for (int i = 0; i < 5; i++) {
        *pointer_to_n += 1;
        printf("At index: %d, pointer_to_n is: %d\n", i, *pointer_to_n);
    }

    return 0;
}
