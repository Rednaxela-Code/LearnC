#import <stdio.h>

void addone(int *n);

int main()
{
    // Example of simple argument by reference.
    int n = 0;
    printf("Before: %d\n", n);
    // Pass the reference to n, not the value itself so the function can edit it effectively.
    addone(&n);
    printf("After: %d\n", n);
    return 0;
}

void addone(int *n)
{
    // n is a pointer here which point to a memory-adress outside the function scope
    (*n)++; // this will effectively increment the value of n
}
