#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    srand(time(0));
    int randomNumber = rand() % 401 + 100; /*to have the random number between 100 and 500 including*/
    printf("The random number is %i\n", randomNumber); /*for the convenience to check the programms inputs and outputs*/
    printf("I generated a random number between 100 and 500.\n Your guess?");
    printf("\n");
    int User_Input , i = 1; /*declaring the variable of User's input and i = 1 since the first guess starts right away*/
    scanf("%i", &User_Input); /*first providing of the input*/
    while (i <= 8){ /*since we have only 8 guesses i <= 8*/
        if ( User_Input == randomNumber){ /*if the guess correct*/
            printf("Yes! You have found correct number in %i guesses", i); /*print of the correct guess*/
            break;
        }
        if (i == 8){ /*if the number of attempts exceeds 8 and it is not correct*/
            printf("Game over!. You had 8 guesses. The number was %i", randomNumber); /*print of the end of the game*/
            break;
        }
        if (User_Input > randomNumber){ /*if the guess is bigger than number*/
            printf("Less\n"); /*print the number is smaller*/
        }
        if ( User_Input < randomNumber){ /*if the guess is smaller than number*/
            printf("More\n"); /*print the number is bigger*/
        }
        i++; /*increasing the number of attempts by 1*/
        
        scanf("%i", &User_Input); /*asking the user its guess again in the loop*/
    }


    return 0;
}