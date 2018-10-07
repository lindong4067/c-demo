#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void)){
	for(size_t i=0; i<arraySize; i++){
		array[i] = getNextValue();
	}
}

//获取随机值
int getNextRandomValue(void){
	return rand();
}

int main(void){
	srand(time(0));
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);
	for(int i=0; i<10; i++){
		printf("%d \n", myarray[i]);
	}
	return 0;
}
