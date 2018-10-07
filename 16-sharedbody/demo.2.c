#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[20];
};


int main(){
    union Data data;
    //同一时间只用到一个成员才可以。
    data.i = 10;
    printf("Data.i  :   %d\n", data.i);

    data.f = 220.5;
    printf("Data.f  :   %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("Data.str    :   %s\n", data.str);

    return 0;
}
