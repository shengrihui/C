#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int guess_a_number(int low,int high)
{
	int m=(low+high)/2;
	printf("我猜%d",m);
	return m;

}


void pause()
{
	long i;
	while(i<1000000)
	{;}
}



int main()
{
	int number;
	int low,high,l,h;
	int guess;
	srand((unsigned int)time(NULL));
	printf("请依次输入猜数范围的上下限：");
	scanf("%d%d",&low,&high);
	number=rand()%(high-low+1)+low;
	h=high;l=low;
	do
	{	
		pause();
		guess=guess_a_number(l,h);
		if(number<guess)
		{
			printf("大了");
			h=guess;
		}
		else if (number>guess)
		{
			printf("小了");
			l=guess;
		}
		else
		{
			printf("猜对了");
			break;
		}
	}while(1);

	return 0;
}