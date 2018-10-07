#include<stdio.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} book;

//struct tag{
//	member_list;
//	member_list;
//	member_list;
//	...
//} variable_list;
//tag, member_list, variable_list 3部分至少要出现2个

struct SIMPLE{
	int a;
	char b;
	double c;
};

struct SIMPLE t1, t2[20], *t3;

typedef struct{
	int a;
	char b;
	double c;
} Simple2;
Simple2 u1, u2[20], *u3;

struct COMPLEX{
	char string[100];
	struct SIMPLE a;
};

struct NODE{
	char string[100];
	struct NODE *nect_node;
};


