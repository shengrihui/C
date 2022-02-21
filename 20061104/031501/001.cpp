#include <stdio.h>
/*
int main()
{
	int a, b, c;
	float s;
	double area;
	a = 3;
	b = 4;
	c = 5;
	s = (float)(a + b + c) / 2.0;
	printf("%f\n", s);
	return 0;
}
*/

int main()
{
	int i;
	char ch;
	for(i=0;i<127;i++)
	{
		printf("i=%d,\t%c\n",i,i);
	}

	printf("ÊäÈë×ÖÄ¸");
	while((ch=getchar()) != '\n')
	{
		if (ch>64 && ch<92)
			ch=ch+32;
		else if (ch>96 && ch<124)
			ch=ch-32;

		putchar(ch);
	}

	return 0;
}
