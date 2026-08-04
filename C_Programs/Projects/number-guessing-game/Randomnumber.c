#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100 
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    // Print the random number
    // printf("random Number: %d\n", randomnumber);

      do{
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if(guessed>randomnumber){
            printf("The number is smaller than %d\n", guessed);
        }
        else if(guessed<randomnumber){
            printf("The number is greater than %d\n", guessed);
        }
        else{
            printf("Congrats!!!\n");
        }
        no_of_guesses++;

      }while(guessed!=randomnumber);
      printf("You guessed the number in %d guesses", no_of_guesses);
    
    return 0;
}