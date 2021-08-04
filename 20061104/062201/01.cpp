#include <stdio.h>

//8
int main()
{
	char *p="%d,a=%d,b=%d\n";
	int a=111,b=10,c;
	c=a%b;
	p+=3;
	printf(p,c,a,b);
	return 0;


}

/*
int main()
{
	int a[10]={1,3,4,4,7,8,9,5,8,10},*p;
	p=a;
	printf("%d\n",(p+=3));
	return 0;
}
*/