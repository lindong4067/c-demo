#include <stdio.h>

int main()
{
	unsigned int a = 60;
	unsigned int b = 13;
	int c = 0;

	c = a & b;
	printf("1	value of c %d\n", c);
	c = a | b;
	printf("2	value of c %d\n", c);
	c = a ^ b;
	printf("3	value of c %d\n", c);
	c = ~a;
	printf("4	value of c %d\n", c);
	c = a << 2;
	printf("5	value of c %d\n", c);
	c = a >> 2;
	printf("6	value of c %d\n", c);
}
