#include <stdio.h>

int main(){
        char dog = 'A';
        char bat = 'B';
        char cat = 'C';
        char dolphin = 'D';

        printf("What is Gingers favorite animal?\n");
        printf("A. dogs \n B. bats \n C. cats \n D. dolphins\n");

        char ans = getchar();

        if (ans == 'A'){
                printf("correct");
        }
        else if (ans == 'B'){
                printf("wrong");
        }
        else if (ans == 'C'){
                printf("wrong");
        }
        else if (ans == 'D'){
                printf("wrong");
        }
        else {
                printf("invalid input");
        }
        return 0;
}
