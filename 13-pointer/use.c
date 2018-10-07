#include<stdio.h>

int main(){
	int var = 20;
	int *ip;

	ip = &var;

	printf("address of var variable : %p\n", &var);

	//指针中存储的地址
	printf("address stored in ip variable : %p\n", ip);

	//指针访问值 *ip
	printf("value of *ip variable : %d\n", *ip);

	return 0;
}
