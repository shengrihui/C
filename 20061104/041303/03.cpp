#include <stdio.h>

int main()
{
	int num1,sum1,sum2;
	int i;

	for (num1=2;num1<=10000;num1++)
	{	
		//求第一个数的因数和
		sum1=0;
		//for( i=1; i<num1 ;i++)
		for( i=1;i<=num1/2; i++)
		{
			if(num1%i==0)
			{
				sum1+=i;
			}
		}
		
		//亲密数本身去掉
		//如果因数和比本身小，说明这个在之前碰到过，避免重复输出
		if (sum1<=num1)
			continue;

		//sum1当做第二个数，求它的因数和
		sum2=0;
		//for (i=1;i<sum1; i++)
		for (i=1;i<=sum1/2;i++)
		{
			if (sum1 %i==0)
			{
				sum2+=i;
			}
		}

		//输出
		if (sum2==num1)
			printf("%-6d%-6d\n",num1,sum1);

	}


	return 0;
}