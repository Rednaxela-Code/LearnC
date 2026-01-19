#include <stdio.h>

int main()
{
    // This returns J
    char *name = "John";
    char *first_letter = &name[0];

    printf("%c\n", *first_letter);

    return 0;
}
