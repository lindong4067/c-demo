#include <stdio.h>
#include <stdlib.h>

int main(){
	enum color {red=1, green, blue};
	enum color favorite_color;
	printf("请输入你喜欢的颜色：1.red, 2.green, 3.blue\n");
	scanf("%d", &favorite_color);
	switch(favorite_color){
		case red:
			printf("你喜欢红色\n");
			break;
		case green:
			printf("你喜欢绿色\n");
			break;
		case blue:
			printf("你喜欢蓝色\n");
			break;
		default:
			printf("你没有喜欢的颜色\n");
	}
	return 0;
}
