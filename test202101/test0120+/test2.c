#include <stdio.h>

#define MAX(x,y) (x>y?x:y)
#define ADD(x,y)((x)+(y))
int Max(int x,int y){
	return (x>y?x:y);
}


int main(){
	int num1=10;
	int num2=20;
	printf("%d\n",MAX(num1,num2));
	printf("%d\n",Max(num1,num2));
	printf("%d\n",ADD(num1,num2));
	return 0;
}



/* 
void test()
{
	int a=0;
	static int b=0;
	a++;
	b++;
	printf("%d  %d\n",a,b);
}

*
int main()
{

	int i=0;
	printf("%c  %c\n","a","b");
	while(i<=5)
	{
		test();
		i++;
	}
	return 0;
}
*/






/*
int main()
{
	int i=0;
	int j=0;
	for (i=1;i<=9;i++)
	{	j=1;
		while (j<=i){
		printf("%d*%d=%d  ",j,i,i*j);
		j++;
	}
	printf("\n");
		
	 } 
		
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	int d = a || b;
//	printf("c=%d\n",c);
//	printf("d=%d\n",d);
//	
	
	
	return 0;
}

*/
