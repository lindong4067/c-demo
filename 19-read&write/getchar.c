#include <stdio.h>

int main()
{
    for(;;){
        printf("\nReady\n");
        int c;
        // setbuf(stdout, NULL);
        printf("\nEnter a Value : ");
        c = getchar();

        printf("\nYou entered : ");
        putchar(c);
        printf("\n");
    }
        return 0;
}
