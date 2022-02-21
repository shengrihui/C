#include <stdio.h>
#include <math.h>
//2019-2020-2计算机科学与技术期末考试
/*
int main()
{


	printf("%d\n",pow(2,3));


	//7
	printf("%5d %-5d\n",1,1);


	//6
	printf("%d \n",3>4==0);

	char x='\61';
	printf("%c\n",x);
	
	double a=12.3;
	printf("%lf\n",a);

	int n1=1,n2=n1;
	printf("%d  %d\n",n1,n2);
	return 0;
}*/


int main()
{
	int i,j;
	for (i=0;i<=6;++i)
	{
		printf("%d ",i);
		for (j=0;j<=i;++j)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
	return 0;
}