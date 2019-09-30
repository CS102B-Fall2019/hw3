#include <stdio.h>

int main(){
        printf("Enter a capital letter: \n");
        char c = getchar();

        (c>='A' && c<='Z')? (printf("%c\n",c+'a'-'A')):(printf("%c is not a captial letter\n",c));

        return 0;
}
        
        
