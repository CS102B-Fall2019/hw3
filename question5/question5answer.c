#include <stdio.h>

int main(){
        char rock = 'r';
        char paper = 'p';
        char scissors = 's';

        printf("choose rock (r), paper (p), or scissor (s): \n");

        char choice = getchar();

        if (choice == 'r'){
                printf("computer chose 'rock'. Its a tie\n");
        }
        else if ( choice == 'p'){
                printf("computer chose 'rock', you win \n");
        }
        else if (choice == 's'){
                printf("computer chose 'rock', you lose \n");
        }
        else {
                printf("invalid input\n");
        }
        return 0;
        }

