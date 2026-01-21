#import <stdio.h>
#import <stdlib.h>

int main()
{
    // char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    // char *pvowels = vowels;
    //
    // // Print the addresses
    // for (int i = 0; i < 5; i++) {
    //   printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i,
    //          &vowels[i], i, pvowels + i, i, vowels + i);
    // }
    //
    // // Print the values
    // for (int i = 0; i < 5; i++) {
    //   printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i,
    //          vowels[i], i, *(pvowels + i), i, *(vowels + i));
    // }

    // Allocate memory to store five characters
    // preface variable with p to be clear about it being a pointer
    // int n = 5;
    // char *pvowels = (char *)malloc(n * sizeof(char));
    //
    // pvowels[0] = 'A';
    // pvowels[1] = 'E';
    // *(pvowels + 2) = 'I';
    // pvowels[3] = 'O';
    // *(pvowels + 4) = 'U';
    //
    // for (int i = 0; i < n; i++) {
    //     printf("%c", pvowels[i]);
    // }
    //
    // printf("\n");
    //
    // free(pvowels);

    // Dynamic memory allocation for 2 dimensional array.
    //
    // This case requires a pointer to a pointer.

    int nrows = 2;
    int ncols = 5;

    // Allocate memory for nrows pointers
    char **pvowels = (char **)malloc(nrows * sizeof(char *));

    // For each row, allocate mamory for ncols elements
    pvowels[0] = (char *)malloc(ncols * sizeof(char));
    pvowels[1] = (char *)malloc(ncols * sizeof(char));

    pvowels[0][0] = 'A';
    pvowels[0][1] = 'E';
    pvowels[0][2] = 'I';
    pvowels[0][3] = 'O';
    pvowels[0][4] = 'U';

    pvowels[1][0] = 'a';
    pvowels[1][1] = 'e';
    pvowels[1][2] = 'i';
    pvowels[1][3] = 'o';
    pvowels[1][4] = 'u';

    for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncols; j++) {
            printf("%c ", pvowels[i][j]);
        }
        printf("\n");
    }

    // Free individual rows
    free(pvowels[0]);
    free(pvowels[1]);

    // Free the top-level pointer
    free(pvowels);
}
