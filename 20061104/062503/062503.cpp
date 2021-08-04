#include <stdio.h>

void func(int s,int a)
{	
	while(s)
	{
		if( s>=0 && s<=100)
			printf("%d  ",s);
		if ( s>0 && s<a)  //»»ÐÐ£¬·½±ã¿´¡£
			printf("\n",s);
		s-=a;
	}

	printf("\n\n\n");
}

int main()
{
	func(100,3);
	func(103,5);
	func(101,7);
	return 0;
}
