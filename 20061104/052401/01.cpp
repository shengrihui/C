#include <stdio.h>
#include <string.H>

/*
int main()
{
	char ch1[]="hello",ch2[]="china";
	char*pch1=ch1;
	puts(ch1);
	puts(ch2);
	printf("%s %s\n",ch1,ch2);
	printf("ch1=%p,ch2=%p,pch1=%p\n",ch1,ch2,pch1);
	
	pch1=ch2;
	puts(ch1);
	puts(ch2);
	printf("%s %s\n",ch1,ch2);
	printf("ch1=%p,ch2=%p,pch1=%p\n",ch1,ch2,pch1);
	


	return 0;
}
*/

int main()
{
	char ch1[]={"aaa"};
	char ch2[]={'a','b','c',0};
	char ch3[5]={49,50,51} ;
	puts(ch1);
	printf("%d\n",sizeof(ch1));
	printf("%d\n",strlen(ch1));
	
	puts(ch2);
	printf("%d\n",sizeof(ch2));
	printf("%d\n",strlen(ch2));
	
	fgets(ch3,sizeof(ch3),stdin);
	puts(ch3);
	printf("%s\n",ch3);
	printf("%d\n",sizeof(ch3));
	printf("%d\n",strlen(ch3));printf("%d\n",strlen(ch2));
	
	
	return 0;
}