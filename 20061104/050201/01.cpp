#include <stdio.h>

/*
02
int main()
{
	int x=10,y=20,ret;
	scanf("%d%d",&x,&y);int max(int x,int y);
	ret=max(x,y);
	printf("max=%d\n",ret);
	return 0;
}

int max(int x,int y)
{
	return x<y?y:x;
}
*/

int main()
{
	int x=0x4142,y=0x4344;
	printf("%c\n",x>y?x:y);
	return 0;
}