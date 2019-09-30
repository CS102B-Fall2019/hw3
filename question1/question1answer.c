#include <stdio.h>
#include <limits.h>

int main(){
        //char min and max
        printf("CHAR_MIN: %d\n",CHAR_MIN);
        printf("CHAR_MAX: %d\n",CHAR_MAX);

        //short min and max
        printf("SHRT_MIN: %d\n",SHRT_MIN);
        printf("SHRT_MAX: %d\n",SHRT_MAX);

        //int max and min 
        printf("INT_MIN: %d\n",INT_MIN);
        printf("INT_MAX: %d\n",INT_MAX);

        //long variable min and max
        printf("LONG_MIN: %ld\n", LONG_MIN);
        printf("LONG_MAX: %ld\n", LONG_MAX);

        //unsigned char
        printf("Unsigned Char: %u\n", UCHAR_MAX);

        //unsigned short
        printf("Unsigned Shrt: %u\n", USHRT_MAX);

        //unsigned int
        printf("Unsigned Int: %u\n", UINT_MAX);

        //unsigned long
        printf("Unsigned Long: %lu\n", ULONG_MAX);

        return 0;
}
