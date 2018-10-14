#include <stdio.h>

int main(){
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("./test.txt", "r");

    //读取字符串，直到遇到第一个空格字符
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    // fgetc(fp);
    //从fp中读取n-1个字符，复制到缓冲区，并在
    //最后追加一个null字符
    fgets(buff, 255, (FILE*)fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("3: %s\n", buff);

    fclose(fp);
}