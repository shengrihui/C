#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int guess_a_number(int low,int high)
{
	int m=(low+high)/2;
	printf("�Ҳ�%d",m);
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
	printf("���������������Χ�������ޣ�");
	scanf("%d%d",&low,&high);
	number=rand()%(high-low+1)+low;
	h=high;l=low;
	do
	{	
		pause();
		guess=guess_a_number(l,h);
		if(number<guess)
		{
			printf("����");
			h=guess;
		}
		else if (number>guess)
		{
			printf("С��");
			l=guess;
		}
		else
		{
			printf("�¶���");
			break;
		}
	}while(1);

	return 0;
}