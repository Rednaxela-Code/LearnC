#include <stdio.h>
#include <string.h>

int main()
{
    // Use a pointer to create readonly string.
    char *name = "Alexander Nijman";

    // This string is editable.
    // char editName[] = "Alexander Nijman";

    // This is a different notation for the same array size.
    // char editNameD[17] = "Alexander Nijman";
    int age = 33;

    printf("%s is %d years old.\n", name, age);

    // Example of getting string length with strlen().
    printf("%s's name is how many characters?\n", name);
    printf("%d characters long..\n", strlen(name));

    // Example of a string comparison using strncmp()
    // 0 equals true.
    if (strncmp(name, "Alexander Nijman", 16) == 0) {
        printf("Hello, Alexander!\n");
    } else {
        printf("You are not Alexander. Go away.\n");
    }

    // Example of string Concatenation using strncat().
    char dest[20] = "Hello";
    char src[20] = "World";

    strncat(dest, src, 3);
    printf("%s\n", dest);
    strncat(dest, src, 20);
    printf("%s\n", dest);

    /* define first_name */
    char *first_name = "John";
    /* define last_name */
    char last_name[] = "Doe";
    char name2[100];

    last_name[0] = 'B';
    sprintf(name2, "%s %s", first_name, last_name);
    if (strncmp(name2, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    name2[0] = '\0';
    strncat(name2, first_name, 4);
    strncat(name2, last_name, 20);
    printf("%s\n", name2);

    return 0;
}
