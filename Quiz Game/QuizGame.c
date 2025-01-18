#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1.How many continents are there on Earth?",
                             "2.Which is the largest ocean on Earth?",
                             "3.What is the hardest natural substance on Earth?",
                             "4.How many bones are there in the adult human body?",
                             "5.Which ancient civilization built the pyramids?"};

    char options[][100] = {"A. 5", "B. 6", "C. 7", "D. 8",
                           "A. Atlantic Ocean", "B. Indian Ocean", "C. Arctic Ocean", "D. Pacific Ocean",
                           "A. Gold", "B. Iron", "C. Diamond", "D. Platinum",
                           "A. 196", "B. 206", "C. 216", "D. 226",
                           "A. Romans", "B. Greeks", "C. Egyptians", "D. Mayans"};

    char answers[5] = {'C', 'D', 'C', 'B', 'C'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]); // Calculates the number of questions present

    char guess;
    int score = 0;

    printf("Welcome to Quiz Game\n");

    for (int i = 0; i < numberOfQuestions; i++) // outer loop
    {
        printf("***************************\n");
        printf("%s\n", questions[i]);
        for (int j = (i * 4); j < (i * 4) + 4; j++)
        { // inner loop to show exactly 4 options in each question

            printf("%s\n", options[j]);
        }

        printf("Answer: ");
        scanf("%c", &guess);
        getchar();

        guess = toupper(guess);

        if (guess == answers[i])
        { // checks if the answer from user is correct or not
            printf("***************************\n");
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }

    printf("***************************\n");
    printf("Quiz Completed.\n");
    printf("Final Score: %d/%d\n", score, numberOfQuestions);
    printf("***************************\n");

    printf("Press any button to exit...");
    getchar();
    return 0;
}
