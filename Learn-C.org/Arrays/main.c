#include <stdio.h>

// Context
// int main() {
//     int numbers[10];
//     numbers[0] = 10;
//     numbers[1] = 20;
//     numbers[2] = 30;
//     numbers[3] = 40; numbers[4] = 50; numbers[5] = 60; numbers[6] = 70;

//     printf("The 7th number in the array is %d\n", numbers[6]);
//     return 0;
// }

// Exercise
// The code below does not compile, because the grades variable is missing.
// One of the grades is missing. Can you define it so the grade average will be 85?

int main() {
    int grades[3];
    int average;

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d\n", average);

    return 0;
}
