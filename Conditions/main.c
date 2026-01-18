#import <stdio.h>

void guessNumber(int guess)
{
    if (guess < 555) {
        printf("Your guess is to low.\n");
    } else if (guess == 555) {
        printf("Correct.Your guessed it!\n");
    } else {
        printf("Your guess is to high.\n");
    }
}

int main()
{
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}
