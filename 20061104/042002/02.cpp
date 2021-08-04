#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int guess_a_number(int low,int high)
{
	int m=(low+high)/2;
	return m;
}

void pause()
{
	long i;
	while(i<1000000)
	{i++;}
}

int User1(int number,int high,int low)
{
	static int h=high,l=low;
	int guess;
	if (h<=l)
		return 0;
	guess=guess_a_number(l,h);
		
	printf("LEGION:我猜%d。",guess);
	if(number<guess)
	{
		h=guess-1;
		return 1;
	}
	else if (number>guess)
	{
		l=guess+1;
		return 2;
	}
	else
	{
		return 0;
	}
}

int User2(int number,int high, int low)
{
	static int guess=low;
	guess++;

	printf("DELL:我猜%d。",guess);
	if(number<guess)
	{
		return 1;
	}
	else if (number>guess)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

void Dis_result(int a,char c)
{

	switch(c)
	{
	case 'l':printf("LEGION");break;
	case 'd':printf("DELL");break;
	}
	switch(a)
	{
	case 2:printf("猜小了。");break;
	case 1 :printf("猜大了。");break;
	case 0:printf("猜对了。");break;
	}
}

int main()
{
	int number;
	int low,high,l,h;
	int legion=1,dell=1;
	int level=1;
	int l_c=0,d_c=0;
	srand((unsigned int)time(NULL));
	printf("请依次输入猜数范围的上下限：");
	scanf("%d%d",&low,&high);
	number=rand()%(high-low+1)+low;
	h=high;l=low;
	do
	{	
		printf("第%d轮：\n",level);
		pause();
		if(legion!=0)
		{
			legion=User1(number,high,low);
			printf("\t");
			l_c++;
		}
		if (dell!=0)
		{
			dell=User2(number,high,low);
			d_c++;
		}

		printf("\n");
		printf("C:这一轮，\n");
		
		Dis_result(legion,'l');
		printf("\t");
		
		Dis_result(dell,'d');
		
		level++;
		printf("\n\n");
	}while((legion + dell)!=0);

	printf("LEGION一共猜了%d次，DELL一共猜了%d次.\n",l_c,d_c);
	return 0;
}