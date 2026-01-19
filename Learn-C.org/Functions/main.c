#include <stdio.h>

int foo(int bar);
void print_big(int input);

int main()
{
    printf("The value of foo is %d\n", foo(1));
    print_big(12);

    return 0;
}

int foo(int bar) { return bar * 2; }
void print_big(int input)
{
    if (input > 10) {
        printf("%d is big!\n", input);
    }
}
