#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int randomNumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed = 0;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher number please!\n");
        }

        no_of_guesses++;

    } while (guessed != randomNumber);

    printf("Congratulations! You guessed the number in %d guesses.\n", no_of_guesses);

    return 0;
}