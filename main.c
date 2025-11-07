#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int randomnumber, guessed, no_of_guesses = 0;

    // Initialize random seed based on current time
    srand(time(0));

    // Generate random number between 1 and 100
    randomnumber = (rand() % 100) + 1;

    printf("Guess the number between 1 and 100:\n");

    // Game loop
    do {
        scanf("%d", &guessed);
        no_of_guesses++;

        if (guessed > randomnumber) {
            printf("Lower number please!\n");
        } 
        else if (guessed < randomnumber) {
            printf("Higher number please!\n");
        } 
        else {
            printf("🎉 You guessed the number in %d attempts!\n", no_of_guesses);
        }

    } while (guessed != randomnumber);

    return 0;
}
