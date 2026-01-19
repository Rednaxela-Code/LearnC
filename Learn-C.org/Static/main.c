#include <stdio.h>

int runner();
static void fun(void);
int sum(int num);

int main()
{
    printf("%d\n", runner());
    printf("%d\n", runner());
    fun();
    printf("%d\n", sum(55));
    printf("%d\n", sum(45));
    printf("%d\n", sum(50));
    return 0;
}

// // this does not work, count is out of memory after function
// int runner()
// {
//     int count = 0;
//     count++;
//     return count;
// }
// While with the static keyword count becomes file wide
int runner()
{
    static int count = 0;
    count++;
    return count;
}

// By default, functions are global in C.
// If we declare a function with static, the scope of that function is reduced to the file
// containing it.
static void fun(void) { printf("I am a static function.\n"); }
int sum(int num)
{
    // find sum to n numbers
    static int result = 0;
    result += num;
    return result;
}
