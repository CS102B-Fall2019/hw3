#include <stdio.h>

int main(){
        printf("Enter a number: \n");
        int i;
        scanf("%d", &i);

        if (i<4){
                printf("i<<2 = %d\n", i<<2);
        }
        else if (i>=8){
                printf("i>=2 = %d\n", i>>2);
        }
        else {
                printf("i>>0 = %d\n", i>>0);
        }
        return 0;

}
        
