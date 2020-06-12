#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

//Purpose: The user has to guess a number from 0-maxValue. The program will output if the user is correct.


int main ()
{

    //Pseudo random number generator.
    int maxValue = 50;
    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1;


    //Ask the user for input. I.e. to guess the number.
    printf("Guess a number 0 - %d: ", maxValue);
    int guess;
    scanf("%d", &guess);

    printf("You guessed %d\n", guess);
    printf("The correct answer was %d\n", randomNumber);


    //Win or lose evaluation.
    if(guess == randomNumber)
    {
        printf("You win!");
    }else
    {
        printf("You lost! ");
    }
    
    
    printf("Thank you for playing!\n");
    return 0;
}