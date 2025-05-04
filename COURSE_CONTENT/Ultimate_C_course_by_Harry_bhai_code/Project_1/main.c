// Date: 20/07/2024

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //initialize random number genarator
    srand(time(0));
  
    //Genarate random number between 1 and 100. koto kicu korlam
    int randomNumber = (rand() % 100) + 1;
    int no_of_gusses = 0;
    int guessed;

    // Print the random number
    // printf("Random Number: %d\n", randomNumber);
    do{
        printf("Guess the number");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Lower number please!\n");
        }
        else if(guessed<randomNumber){
            printf("Higher number please!\n");
        }
        else{
            printf("congrats!!\n");
        }
        no_of_gusses++;
    }while(guessed != randomNumber);

    printf("You guessed the number in %d guesses.\n", no_of_gusses);

    return 0;
}