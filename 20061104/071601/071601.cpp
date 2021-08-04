#include <stdio.h>
int d=5;

void a ( int *x)
{
	*x=3;
}

void b(int *x)
{
	a(x);
}
void c(int *x)
{
	b(x);
	printf("%d",*x);
}

int main()
{
	c(&d);
	printf("%d\n",d);
	return 0;
	
}
