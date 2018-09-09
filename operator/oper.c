#include <stdio.h>

int main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	printf("line 1 value of c : %d\n", c);
	c = a - b;
	printf("line 2 value of c : %d\n", c);
	c = a * b;
	printf("line 3 value of c : %d\n", c);
	c = a / b;
	printf("line 4 value of c : %d\n", c);
	c = a % b;
	printf("line 5 value of c : %d\n", c);
	c = a++;
	printf("line 6 value of c : %d\n", c);
	c = a--;
	printf("line 7 value of c : %d\n", c);
	
}
