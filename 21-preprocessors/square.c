#include <stdio.h>

#define MAX(x, y) ((x > y) ? (x) : (y))
#define SWAP1(x, y) {x=x+y;y=x-y;x=x-y;}
#define SWAP2(x, y) {x=x^y;y=x^y;x=x^y;}

int main()
{   
    int a, b;
    // setbuf(stdout, NULL);
    scanf("%d %d", &a, &b);
    printf("Max between a and b is %d\n", MAX(a, b));

    SWAP1(a, b);
    printf("%d %d\n", a, b);

    SWAP2(a, b);
    printf("%d %d\n", a, b);
    return 0;
}