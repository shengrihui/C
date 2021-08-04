#include <stdio.h>

//∑÷÷ß—≠ª∑

//47
int main()
{
	int i=1,a=0,s=1;
	do
	{
		a=a+s*i;s=-s;i++;}
	while(i<=10);
	printf("%d\n",a);
	return 0;
}

//44
/*
main()

{int  x,y,z;

  x=0;y=1;z=3;

  x=++y<=x||x+y!=z;

  printf("%d,%d",x,y);

}
*/

//32
/*
int main()
{
	int x=3;
	int y=0;
do { y=x--;

if (!y)  {printf("*"); continue;}

printf("#");

} while (1<=x<=2);
return 0;
}
*/

//29
/*
main()

{

   while(putchar(getchar())!='?');

}
*/

//27
/*
int main()
{int  n;

 scanf("%d", &n);

 if(n<=90) printf("A\n");

 else if(n<=80)  printf("B\n");

 else if(n>=60)  printf("C\n");

 else printf("D\n");
return 0;
}
*/
//21
/*
int main()
{
	int e=1;
	while(~e)
		printf("*");
	return 0;
}

*/


/*
int main()
{
	int i;
	for (i=1;i++<4;++i);
	printf("%d\n",i);

	return 0;
}
*/


/*
//4 5
int main()
{
	//4A
	/*int k=1000;
	do
	{
		--k;
		printf("*");
	}while(k);*/
	
	//4B
	/*int i=100;
	while(1)
	{
		i=i%100+1;
		if (i>100)break;
	printf("%d\n",i);
		}
*/

	//4C
	/*
	int s=36;
	while(s>=0)
	{++s;}printf("*%d\n",s);
*/
	//4D 5C
	//for(;;	printf("*");
	
	//5A
	/*
	int k=10;
	do
	{k++;k++;}
	while(k>0);
	printf("%d\n",k);


	//5B
	
	int s=100;
	int i=0;
	while(s)
	{s-=3;i++;}
	printf("s=%d\ni=%d\n",s,i);
	

	//5D
	/*
	int i=100;
	while(1)
	{
		i=i%100+1;
		if (i>100)break;
	printf("%d\n",i);
		}
	return 0;
}
*/