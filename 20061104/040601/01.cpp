#include <stdio.h>
#include <math.h>
int main()
{
	/*
	long sum,t;
	int n,i;
	printf("n=");
	scanf("%d",&n);
	for (sum=0,t=1,i=1;i<=n;i++)
	{t*=i;
	sum+=t;}
	printf("sum=%ld\n",sum);
*/

	/*
	int n,a,b,c;
	for (n=100;n<=999;n++)
	{
		a=n/100;
		b=(n%100)/10;
		c=n%10;
		if ( pow(a,3)+pow(b,3)+pow(c,3)==n)
			printf("%d\n",n);
	}
	*/

	int n;
	int i ,t;
	int sum=0;
	//printf("n=");
	//scanf("%d",&n);
	sum=0;
	for (i=4;i>0;i--)
	{	sum=+i*(sum+1);`1
		
	}
	printf("sum=%ld\n",sum);

	return 1;
}