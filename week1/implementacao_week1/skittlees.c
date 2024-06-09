#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int isEven(int num) { //Checking if the number of skittles is even:
    return num % 2 == 0;
}



int main(void) {
    srand(time(NULL));  // PRNG seed(Pseudo Random Number Generator)
    int num_skittles = rand() % 1024; // Choose a pseudo-random-number between [0, 1023]
    int user_guess;

    printf("\nHello! I'm a candy machine and i'll give you a candy if you say me the correctly number of skittles in me! A tip: is a number between 0 and 1024\n");
    printf("Come on! Type the number of skittles that you think I have on me: "); 

    for (;;) { //Loop for user attempts
        scanf("%d", &user_guess); //Scanning the user_guess

        if (user_guess == num_skittles) { //Checking if the user got it right
            break;
        } else if (user_guess < num_skittles) { //Giving tips for user
            printf("Hah, I have way more than that! Try again: ");
        } else if (user_guess > num_skittles) {
            printf("Okay, I don't have that many candies. Try again: ");
        }
    }

    printf("You got it! I have %d skittles on me. ", num_skittles);

    printf("%s", isEven(num_skittles) ? "And this number is even!" : "And this number aren't even!");



    return 0;
}



