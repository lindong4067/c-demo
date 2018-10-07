#include <stdio.h>
#include <string.h>

//简单结构
struct {
    /* data */
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

//位域结构
struct {
    /* data */
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

int main(int argc, char const *argv[]){
    /* code */
    printf("Memory size occupied by status1 : %d\n", sizeof(status1));
    printf("Memory size occupied by status2 : %d\n", sizeof(status2));
    return 0;
}




