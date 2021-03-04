#include <stdio.h>
#include <string.h> 


int func(int i)
{
	int a=i%10;
	int b=(i%100-a)/10;
	int c=(i-a-b*10)/100;
	int z=a*a*a+b*b*b+c*c*c;
	return z;
}
int main()
{
	
	int sum = 0;
	int i = 0;
	
	while(i<1000)
	{
		
	//	printf("%d %d %d\n",a,b,c);
		if ( func(i)==i)
		{printf("%d\n",i);
		}
		i++;
	}





/*	
	while (i<=100)
	{
		sum=sum+i;
		printf("%d\n",i);
		i++;
		}	
		
	printf("%d\n",sum);
	
*/	
	
	
	return 0;
 } 



/*
int main()
{
	int num1=0;
	int num2=0;
	//printf("%d\n%d\n",num1,num2);
	

	const int n=10;
	printf("%d\n",n);
		
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	char arr3[]="\0abc\0d";
	 
	printf("%s\n",arr1);
	printf("%s\n",arr2);
	printf("%d\n",strlen(arr1));
	printf("%d\n",strlen(arr2));
	printf("%d\n",strlen(arr3));
	
	printf("%d\n",strlen("c:\test\32\test.c"));
	printf("c:\test\32\test.c");
	printf("%c\n",'\132');
	scanf("%d%d",&num1,&num2);
	
	int sum=0;
	sum=num1+num2;
	printf("sum=%d\n",sum);
	
	getchar();
	return 0;
 } 
 */
