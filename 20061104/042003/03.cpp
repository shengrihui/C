#include <stdio.h>

void test(int n)
{

	static int a=n;
	a++;
	printf("%d\n",a);
}

int main()
{
	int i=0;
	while(i<5)
	{
		test(i);
		i++;
	}
	return 0;
}