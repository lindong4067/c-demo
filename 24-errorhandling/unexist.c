#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if(pf == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Error Num : %d\n", errno);
        perror("By perror stdout error");
        fprintf(stderr, "Open file error : %s\n", strerror(errnum));
    }
    else
    {
        fclose(pf);
    }
    return 0;
}