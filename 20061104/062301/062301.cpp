#include <stdio.h>

//函数调用21
/*
f(int x){return x;}
int main()
{
	int x=3;
	printf("%d %d\n",sizeof(f(x)),f(x));
	return 0;
}
*/

//函数调用12
/*
 main() 

{ int a[4]={1,3,5,7}; 

 printf("%d,%d,%d,%d\n",a); }
*/

//函数调用8
/*
 float f1(float x)     

 {int k=2;      

k=k*x;      

return k;}   

 main()     

{float b=4.3;      

printf("%.1f",f1(b)); }
*/


//函数调用
/*
 main() 

{ char a[2]; 

 scanf("%s",a); 

 printf("%c,%c",a[1],a[2]); }
*/


//500内素数
/*
int main()
{
	int n,i,num=0;
	for (n=2;n<=500;n++)
	{
		for (i=2;i<n;i++)
			if (n%i==0)
				break;
		if (i>=n)
		{
			printf("%d\n",n);
			num++;
		}
		
	}
	printf("%d\n",num);
	
		return 0;
	

}

*/



/*
//3
int main()
{
	char a[3]={'1','2','3'};
	printf("%s\n",a);
	char string[ ]="Sunny";

printf("%.3s",string);
	return 0;
}
*/