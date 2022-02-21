#include <stdio.h>
#include <math.h>
int main()
{
	int n,start;
	int a,b;
	//scanf("%d%d",&n,&start);
	//start=pow(2,31)-5;
	start=990;n=999;
	//for (n=1;n<=990;n++){
	a=b=start;
	while(a<start+2*(n-1))
	{
		a+=2;
		b^=a;
	}
	//printf("%5d  %x  result=%x\n",n,a,b);}
	printf("%d\n",b);
	return 0;
}

