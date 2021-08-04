#include <stdio.h>

int main()
{
	int i,j;
	int a[3][4]={
			{1,3,4,5},
			{3},
			};
	//value
	for (i=0;i<3;i++)
	{
		
		for (j=0;j<4;j++)
		{
			printf("%-3d",a[i][j]);
		}
		printf("\n");

		for (j=0;j<4;j++)
		{
			printf("%-3d",*(a[i]+j));
		}
		printf("\n\n");
	}
	
	//address
	for (i=0;i<3;i++)
	{	
		printf("%p\n",a[i]);

		for (j=0;j<4;j++)
		{
			printf("%p ",&a[i][j]);
		}
		printf("\n");

		for (j=0;j<4;j++)
		{
			printf("%p ",a[i]+j);
		}
		printf("\n\n");


	}

	printf("%p %p %p\n",a,a[0],&a[0][0]);
	return 0;
}