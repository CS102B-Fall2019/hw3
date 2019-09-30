#include <stdio.h>

int main(){
        printf("enter a char: \n");

        char c;
        scanf("%c", &c);
        printf("ASCII dec value of %c = %d\n",c,c);
        printf("ASCII hexidec value of %c = %x\n",c,c);
        printf("ASCII octal value %c = %o\n",c,c);
        return 0;
}

