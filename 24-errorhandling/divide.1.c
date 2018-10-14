#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend = 20;
    int divisor = 5;
    int quotient;

    if(divisor == 0)
    {
        fprintf(stderr, "Divide 0 error...\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient value : %d\n", quotient);

    exit(EXIT_SUCCESS);
}
