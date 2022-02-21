#include <stdio.h>

/*
void myswap(int* a ,int *b)
{
	int* temp;
	/*
	*temp=*a;
	+*a=*b;
	*b=*temp;
	
	printf("temp_d=%d\n",temp);
	
	printf("temp_p=%p\n",temp);
	printf("*temp_d=%d\n",*temp);



	printf("%d\n",*temp);
	printf("&a=%p,&b=%p\n",a,b);
}

int main()
{
	int x=10,y=20;
	printf("x=%d,y=%d\n",x,y);
	printf("&x=%p,&y=%p\n",&x,&y);
	myswap(&x,&y);
	printf("x=%d,y=%d\n",x,y);
	
	return 0;
}
*/

//
/*
int main()
{
	//printf("%d\n",sizeof(char**));
	int i=30;
	int*pi=&i;
	int**ppi=&(pi);
	int ***pppi=&ppi;

	printf("i=%d,*pi=%d,**ppi=%d,***pppi=%d\n\n",i,*pi,**ppi,***pppi);
	*pi=3550;

	printf("i=%d,*pi=%d,**ppi=%d,***pppi=%d\n\n",i,*pi,**ppi,***pppi);
	
	**ppi=555;
	printf("i=%d,*pi=%d,**ppi=%d,***pppi=%d\n\n",i,*pi,**ppi,***pppi);
	
	***pppi=9999;
	printf("i=%d,*pi=%d,**ppi=%d,***pppi=%d\n\n",i,*pi,**ppi,***pppi);
	
	printf("*pppi=%X,ppi=%p\n",*pppi,ppi);
	printf("*ppi=%X,pi=%p\n",*ppi,pi);
	return 0;
}*/

/*

int main()
{
	int a[10]={0};
	int *b=a;
	printf("%p,%p\n",a,b);
	return 0;
}
*/

int main()
{
	int a[2]={0x41424344,0x61626364};
	char *ch =(char*)a;
	
	int i;
	for (i=0;i<8;i++)
		printf("%c ",*(ch+i));
	printf("%p",ch);
	return 0;
}