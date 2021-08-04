#include <stdio.h>

//ÍÃ×ÓÊıÁĞ

int main()
{
	int a[20]={1,1};
	printf("%d\n%d\n",a[0],a[1]);
	for (int i=2;i<20;i++)
	{
		a[i]=a[i-1]+a[i-2];
		printf("%d\n",a[i]);
	}
	return 0;
}