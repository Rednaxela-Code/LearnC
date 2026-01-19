#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    printf("Sum of the array is %d\n", sum);

    int factorial = 1;
    for (int i = 0; i < 10; i++) {
        factorial *= array[i];
    }

    printf("10! is %d.\n", factorial);

    return 0;
}
