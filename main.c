#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    // Seed pseudo-random number generator
    srand(time(0) + getpid());

    int secret = rand() % 256;

    printf("I'm thinking of a number between 0 and 255...\n");
    int guess = -1;

    do {
        printf("What is it? ");
        scanf("%d", &guess);
        if (guess > secret) {
            printf("Lower\n");
        } else if (guess < secret) {
            printf("Higher\n");
        }
    } while(guess != secret);

    printf("Correct! Game over.\n");

    return EXIT_SUCCESS;
}
