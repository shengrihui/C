#include <stdio.h>

int main()
{
	
	int a[2][3]={{1,3,4},{2,3,5}};
	int (*pa)[3]=a;

	

	int i,j;
	
	
	for (i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*(pa+i)[j]);
		}
		printf("\n");
	}

	printf("\n");
		printf("\n");
		printf("\n");
	
	
	
	for(i=0;i<2;i++)
	{
		printf("%p \n",*(a+i));
		for( j=0;j<3;j++)
		{
			printf("%d ",*(*(a+i)+j));
						printf("%p ",*(a+i)+j);
		}
		printf("\n");
	}
		printf("%d", printf("%d", printf("%d", 1234567890)));
	return 0;
}