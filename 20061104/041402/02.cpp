#include <stdio.h>

int main()
{
	short int i=2;

	while(i)
	{
		i++;
		printf("%hd\n",i);
	}

	printf("%hd\n",65535);

	printf("%c\n",0x4161);
	return 0;
}