#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user_state{
        char name[100];
        int wins;
        int loss;
        int bestScore;
};

int main(){
        struct user_state s1,s2;
        s1.wins = 0;
        s1.loss = 0;
        s1.bestScore = 101;

        s2.wins = 0;
        s2.loss = 0;
        s2.bestScore = 101;

        printf("Enter name of player 1: ");
        scanf("%s",&s1.name);
        printf("Enter name of player 2: ");
        scanf("%s",&s2.name);

        int firstPlaying = 1;
        int firstScore = -1;
        int t=
        while(1){
                int rando = rand()%100+1;

                if(firstPlaying){
                        int x = -1;
                        int tries = 0;
                        while(x != rando){
                                printf("Guess the number: ");
                                scanf("%d",&x);
                                tries++;
                                if(x < rando){
                                        printf("Too low\n");
                                }
                                else if(x > rando){
                                        printf("Too high\n");
                                }
                        }
                        printf("You guessed the number in %d attempts\n\n",tries);
                        s1.bestScore = (s1.bestScore > tries)? tries : s1.bestScore;
                        firstScore = tries;
                        firstPlaying = 0;
                }
                else{
                        int x = -1;
                        int tries = 0;
                        while(x != rando){
                                printf("Guess the number: ");
                                scanf("%d",&x);
                                tries++;
                                if(x < rando){
                                        printf("Too low\n");
                                }
                                else if(x > rando){
                                        printf("Too high\n");
                                }
                        }
                        printf("You guessed the number in %d attempts\n\n",tries);
                        s2.bestScore = (s2.bestScore > tries)? tries : s2.bestScore;

                        if(firstScore > tries){
                                s2.wins += 1;
                                s1.loss += 1;

                                printf("%s won\n",s2.name);
                        }
                        else if(firstScore < tries){
                                s1.wins += 1;
                                s2.loss += 1;
                                printf("%s won\n",s1.name);
                        }
                        else{
                                printf("Draw\n");
                        }
                }
        }
}