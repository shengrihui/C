#include <stdio.h>
#include <math.h>

int main()
{
	int i ,j,c=1;
	printf("%-4d",2);
	for (i =3; ;i+=2)
	{
		for (j=2;j<=(int)sqrt(i);j++)
		{
			if (i%j==0)
				break;
		}
		if (j==(int)sqrt(i)+1)
		{c++;
		printf("%-4d",i);}
		if(c==100)
			break;
	}
	printf("\n%d\n",c);
	return 0;
}