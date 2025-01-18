#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fun Guessing Game

int main()
{
    int min, max, guess, attempt, answer;
    printf("Welcome to a guessing game!\n");
    printf("Please choose a minimum value you want to guess from!\n");
    scanf("%d", &min);
    printf("Thannks!Now please choose a maximum value you want to guess to!\n");
    scanf("%d", &max);

    srand(time(0));

    answer = (rand() % max) + min;
    printf("**************************************************\n");
    printf("Now the fun part!\n");
    printf("Guess the number what is it:\n");

    attempt = 0;

    do
    {

        scanf("%d", &guess);
        if (guess < answer)
        {
            printf("Too Low.\n");
        }
        else if (guess > answer)
        {
            printf("Too High.\n");
        }
        else
        {
            printf("You guessed Correct!\n");
        }
        attempt++;
    } while (answer != guess);

    printf("**************************************************\n");
    printf("Answer was: %d\n", answer);
    printf("Guesses took: %d\n", attempt);
    printf("**************************************************\n");
    printf("Press Enter to exit the program...");
    getchar();
    return 0;
}
