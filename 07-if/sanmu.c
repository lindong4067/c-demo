#include<stdio.h>

int main()
{
	int num;
	printf("system in a number : " );
	scanf("%d", &num);
	(num % 2 == 0)?printf("偶数"):printf("奇数");
}
