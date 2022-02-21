#include <stdio.h>
#include <string.h>




void print_len(char *ch)
{
	int m=0,n=0;
	char *t=ch;
	while (*t!='\0')
	{	m++;t++;}

	t=ch;
	while (*t++!='\0')
		n++;

	printf("mylen=%d  ",m);
	
	printf("mylen2=%d  ",n);
	printf("strlen=%d\n",strlen(ch));
}



int main()
{
	char ch1[10]={'1','2','3',0,'4'};
	
	

	puts(ch1);
	printf("sizeof( )=%d  ",sizeof(ch1));
	print_len(ch1);


gets(ch1);


puts(ch1);
	printf("sizeof( )=%d  ",sizeof(ch1));
	print_len(ch1);


fgets(ch1,sizeof(ch1),stdin);;


puts(ch1);
	printf("sizeof( )=%d  ",sizeof(ch1));
	print_len(ch1);



	return 0;
}