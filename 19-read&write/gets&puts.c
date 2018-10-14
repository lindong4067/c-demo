#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100];
    setbuf(stdout, NULL);
    printf("Enter a value :");
    gets(str);

    printf("\nYou entered : ");
    puts(str);
    return 0;
}
