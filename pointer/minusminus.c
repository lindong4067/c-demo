#include<stdio.h>

const int MAX = 3;

int main(){
	int var[] = {10, 100, 200};
	int i, *ptr;
	ptr = &var[MAX-1];
	for(i=MAX; i>0; i--){
		printf("[%d]存储位置: %d\n", i-1, ptr);
		printf("[%d]存储值: %d\n", i-1, *ptr);

		ptr--;
	}
	return 0;
}
