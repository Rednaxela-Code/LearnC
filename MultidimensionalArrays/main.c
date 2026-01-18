#include <stdio.h>

int main() 
{
    // // This syntax is the same as the next 
    // // in terms of initializing a MultiDimensionalArray
    // int a[3][4] = {
    //     {0, 1, 2, 3},
    //     {4, 5, 6, 7},
    //     {8, 9, 10, 11},
    // };
    //
    // int ab[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    //
    // // This statement takes the 4th element from the 3rd row of the array.
    // int val = a[2][3];

// Let us try to find out the average marks of a group of five students for 
// two subjects, Mathematics and Physics. To do this, we use a two-dimensional 
// array called grades. The marks corresponding to Mathematics would be stored 
// in the first row (grades[0]), whereas those corresponding to Physics would be stored 
// in the second row (grades[1]). Complete the following steps so that you can execute this program.
//
// -Declare grades as a two-dimensional array of integers
// -Complete the for loops by specifying their terminating conditions
// -Compute the average marks obtained in each subject
//
    float average;

    int grades[2][5]; 
    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    for (int i = 0; i < 2; i++) {
        average = 0;
        for (int j = 0; j < 5; j++) {
            average += grades[i][j];
        }

        average /= 5.0;
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}
