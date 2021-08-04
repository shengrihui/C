#include <stdio.h>

#define MAX(x,y) x>=y?x:y
#define MIN(x,y) x<y?x:y
/*
int main()
{

	int m,n,r;
	printf("input two numbers:");
	scanf("%d%d",&m,&n);

	
	
		m=MAX(m,n);
		n=MIN(m,n);
		r=m-n;
		
	while (r!=0)
	{
		m=MAX(r,n);
		n=MIN(r,n);
		r=m-n;
	}
	
	printf("%d\n",n);

	return 0;
}
*/

int main()
{
	int m,n,r;
	printf("input two numbers:");
	scanf("%d%d",&m,&n);

	
	
		r=m%n;
		
	while (r!=0)
	{
		m=MAX(r,n);
		n=MIN(r,n);
		r=m%n;
	}
	
	printf("%d\n",n);

	return 0;

	
}