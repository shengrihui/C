#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int num,g;
	srand((unsigned int ) time(NULL));
	num=rand()%100+1;
	for(int i=0;i<10;i++)
	{	
		
		printf("%d\n",num);
	}


	return 0;
}
