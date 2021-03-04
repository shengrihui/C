#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//青蛙跳台阶
/*
int frog(int n)
{
	if (1 == n)
		return 1;
	else if (2 == n)
		return 2;
	else
		return frog(n - 1) + frog(n - 2);
}

int main()
{
	int n = 10;
	scanf("%d", &n);
	printf("青蛙一共有%d种跳法。", frog(n));
	return 0;
}
*/



//汉诺塔
/*
int count = 0;
void Hanoi(int n, char x, char y, char z)
{
	if (1 == n)
	{
		printf("%c -> %c\n", x, z);
		count++;
	}
	else
	{
		Hanoi(n - 1, x, z, y);
		Hanoi(1, x, y, z);
		//printf("%c -> %c\n", x, z);
		Hanoi(n - 1, y, x, z);
	}
}

int main()
{
	int n = 3;
	scanf("%d", &n);
	Hanoi(n, 'A', 'B', 'C');
	printf("%d\n", count);
	return 0;
}
*/


//九连环
/*
void down();
void up();
void pr();
int d[100] = { 1 };
int num = 0;
int h = 9;
void down(int n)
{
	if (n == 0)
	{
		if (d[n] == 1)
		{
			d[n] = 0;
			pr();
		}
	}
	else if (n == 1)
	{
		up(0);
		d[0] = 0;
		d[1] = 0;
		pr();

	}
	else
	{
		up(n - 1);
		d[n] = 0;
		pr();
		down(n - 1);

	}
}

void up(int n)
{
	if (n == 0)
	{
		if (d[n] == 0) {
			d[n] = 1;
			pr();
		}
	}
	else if (n == 1)
	{
		if (d[1] == 0)
		{
			d[0] = 1;
			d[1] = 1;
			pr();
		}
		down(0);
	}
	else
	{
		if (d[n] == 0)
		{
			up(n - 1);
			d[n] = 1;
			pr();
		}
		down(n - 1);
	}
}



void pr()
{
	int i = 0;
	num++;
	printf("%-4d", num);
	for (i = h; i >= 0; i--)
		printf("%d ", d[i]);
	printf("\n");
}

int main()
{
	int i;
	scanf("%d", &h);
	h--;
	for ( i = h; i >= 0; i--)
		d[i] = 1;
	down(h);
	return 0;
}

*/

//百度百科
/*
main()
{ __int64 n;
int a[70]=,num=0,i;
scanf("%I64d",&n);
if(n==0)
{ printf("0");
return 0;
}
while(n>0)
{ a[num++]=n%2;
n/=2;
}
for(i=0;i<num;i++)
a=a^a[i+1];
while(a[num]==0)
num--;
for(i=0;i<=num;i++)
printf("%d",a);
}
*/