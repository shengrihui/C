#include <stdio.h>

void my_swap(int**x,int**y)
{
	int*temp=NULL;
	temp=*x;
	*x=*y;
	*y=temp;

}

int main()
{
	int x=1,y=9;
	int*px=&x,*py=&y;
	printf("x=%d,y=%d\n",x,y);
	my_swap(&px,&py);

	printf("x=%d,y=%d\n",*px,*py);


	return 0;
}