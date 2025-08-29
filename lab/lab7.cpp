#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_game() {
    int score = 100;
    int winning_number = rand() % 100 + 1;
    int guess;
    int lower_bound = 1;
    int upper_bound = 100;

    printf("(Score=%d)\n\n", score);

    while (score > 0) {
        printf("Guess the winning number (%d-%d) :\n", lower_bound, upper_bound);
        
        // Loop to handle non-integer input
        while (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear input buffer
            printf("Guess the winning number (%d-%d) :\n", lower_bound, upper_bound);
        }
        
        if (guess < lower_bound || guess > upper_bound) {
            printf("Please guess a number within the specified range.\n");
            continue;
        }

        if (guess == winning_number) {
            printf("\nThat is correct! The winning number is %d.\n", winning_number);
            printf("Score this game: %d\n", score);
            break;
        } else {
            score -= 10;
            if (score <= 0) {
                printf("Sorry, you're out of score. The winning number was %d.\n", winning_number);
                break;
            }
            if (guess < winning_number) {
                printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n\n", guess, score);
                if (guess > lower_bound) {
                    lower_bound = guess + 1;
                }
            } else { // guess > winning_number
                printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n\n", guess, score);
                if (guess < upper_bound) {
                    upper_bound = guess - 1;
                }
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int choice;

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &choice) != 1) {
            printf("Please enter only 1 or -1.\n\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        if (choice == 1) {
            play_game();
            printf("\n");
        } else if (choice == -1) {
            printf("\nSee you again.\n");
            break;
        } else {
            printf("Please enter only 1 or -1.\n\n");
        }
    }

    return 0;
}