#include <stdio.h>

int main()
{
	int n,a,s,count;
	a=2;s=0;n=1;count=1;
	while(count<=7)
	{n=n*a;s=s+n;++count;printf("%d\n",n);}
	printf("%d\n",s);
	return 0;
}


/*
int main ()
{
	int n=0;

while(n++<=2);

printf("%d",n);
return 0;
}
*/