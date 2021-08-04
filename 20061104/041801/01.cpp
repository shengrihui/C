#include <stdio.h>

int main()
{
	int i;
	int x,y,z,k;
	for (i=1;i<4;i++)
	switch(i)
	{
		case 1:printf("%d",i);
		case 1+1:printf("%d",i);
		default:printf("%d",i);
	}
	
	x=(y=4,z=17,k=32);
	printf("\n%d %d %d %d\n",x,y,z,k);
	return 0;
}