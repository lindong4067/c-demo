#include<stdio.h>
#include<string.h>

int main(){
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;

	//复制str1到str3
	strcpy(str3, str1);
	printf("str3: %s\n", str3);

	//连接
	strcat(str1, str2);
	printf("str1: %s\n", str1);

	len = strlen(str1);
	printf("strlen: %d\n", len);

	return 0;
}
