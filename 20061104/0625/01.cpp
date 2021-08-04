

//CÓïÑÔ»ù´¡×÷Òµ
#include <stdio.h>

//19  23 38

int main()
{	
	int k=7,x=12;
	int a=6,b=4,c=2;
	int i=0.5&&'a';
	double t=1;
	double r=(t=1,t+5,t++);
	//printf("%d\n",(x%=k)-(k%=5));
	//printf("%d\n",x%=k-k%5);
	//printf("%d\n",x%=(k%=5));
	//printf("%d\n",x%=(k-k%5));
	printf("%d\n",(!(a-b)+c-1&&b/3+c/2));
	printf("%d\n",i);

	printf("%lf\n",r);
	return 0;

}
//8 9 11
/*
int main()
{
	int x=12,n=5;
	int a,b,c=(a=2,b=5,a++,b++,a+b);
	char ch='c';
	printf("%d\n",x%=(n%=2));
	printf("%d\n",(a=2,b=5,a++,b++,a+b));
	printf("%d\n",c);
	printf("%5c\n",ch);
	return 0;
}
*/

//3
/*
int main() {
int m=5,y=2; y+=y-=m*=y;
printf("%d\n",y);
	return 0;
}
*/

//1
/*
int main()
{
	int n=10,i=4;
	printf("%d\n",n%=i+1);
	return 0;
}
*/