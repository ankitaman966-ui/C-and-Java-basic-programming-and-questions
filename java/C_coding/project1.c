#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*makin the prject on guess the no */

int main(){
    printf("Welcome to the guessing number game\n");
    int guess,random;
    int times=0;

    srand(time(NULL));
    random=rand() % 100+1;

    do{
        printf("\nplease guess the number :");
        scanf("%d",&guess);
        times++;

        if(guess>random){
            printf("\nguessed number is larger,please guess again");
        }
        else if(guess<random){
            printf("\nguessed number is smaller,please guess again");
        }
        else{
            printf("\ncongratulation, you guessed the number in %d times",times);
        }
    }while(guess!=random);

    printf("\nYou have completed the game\n");
    printf("\ngame is developed by Ankit prajapti");
    return 0;
}