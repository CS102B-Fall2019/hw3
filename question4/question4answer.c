#include <stdio.h>
#define FREEZING 32

int main() {
        int temp;
        printf("Enter temperature: \n");
        scanf("%d", &temp);
        
        if (temp>32){
                printf("Above freezing\n");
        }
        else if (temp<32){
                printf("Below freezing\n");
        }
        else{
                printf("invalid input\n");
                }
        return 0;
}

