#include <stdio.h>
int main()
{
	char ch[14];
	int i,j ;
	for (i=0;i<14;i++)
		scanf("%c",&ch[i]);
	for(j=-20;j<40;j++)
	{
	for (i=0;i<14;i++)
		printf("%c",ch[i]-j);
	
	printf("\n");
	}

	return 0;
}