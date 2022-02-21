#include <stdio.h>
#include <math.h>

int main()
{
	int x,y;
	int a,b,c;
	printf("请输入一个三位数：");
	scanf("%d",&x);
	x=abs(x);
	a=x/100;
	b=(x%100)/10;
	c=x%10;
	y=c*100+b*10+a;
	printf("逆序后的三位数是%d\n",y);
	return 0;

}
