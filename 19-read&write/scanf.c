#include <stdio.h>

int main(int argc, char const *argv[])
{
    float f;
    setbuf(stdout, NULL);
    printf("Enter a number: ");
    scanf("%f", &f);
    printf("Value : %f\n", f);
    return 0;
}
