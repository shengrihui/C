#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void swap ( int* pa , int* pb)
{
	
	int t = 0;
	t = *pa;
	*pa = *pb;
	*pb = t;
}


int main()
{
	int a = 10;
	int b = 20;

	printf("a=%d,b=%d\n", a, b);

	swap(&a, &b);
	printf("a=%d,b=%d\n", a, b);


	return 0;
}