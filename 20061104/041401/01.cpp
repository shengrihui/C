#include <stdio.h>

int sum(int n)
{
	int s=1,i;
	for (i=2;i<=n/2;i++)
	{
		if(n%i==0)
			s+=i;
	}
	return s;

}


int main()
{
	int num;
	int x,y;
	for (num=3;num<=10000;num++)
	{
		Qx=sum(num);
		if (x<=num)
			continue;
		
		y=sum(x);
		if (y==num)
			printf("%-6d%-6d\n",num,x);


	}
		
	return 0;

}