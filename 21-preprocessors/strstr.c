#include <stdio.h>

#define tokenpaster(n) printf("token" #n " = %d", token##n)

int main(){
    int token67 = 100;
    tokenpaster(67);
    return 0;
}