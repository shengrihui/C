#include <stdio.h>
//µÚ¾ÅÕÂ×÷Òµ

int main()
{
	int a,b,*pa=&a,*pb=&b;
	a=10;
	b=100;
	a=*pb;
	*pb=*pa;
	*pa=a;
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
