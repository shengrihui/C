#include <stdio.h>

//÷∏’Î≈≈–Ú
void my_sort(int *a,int sz)
{
	int temp;
	int*i=a,*j=a+1;
	for(i=a;i<a+sz-1;i++)
	{
		
		for(j=i+1;j<a+sz;j++)
		{
			if(*i>*j)
			{
				temp=*i;
				*i=*j;
				*j=temp;
			}
		}
	}

}


int* my_sort2 (int*a,int sz)

{
	static int b[10];
	int pm[10]={0};
	int p=1 ,i,j;
	
	for (i=0;i<sz;i++)
	{
		p=1;
		for(j=0;j<sz;j++)
		{
			if( *(a+j)<*(a+i))
				p++;
		}
		pm[i]=p;
	}

	j=0;
	for(p=1;p<=sz;p++)
	{
		for(i=0;i<sz;i++)
		{
			if(pm[i]==p)
			{
				*(b+j)=*(a+i);
				j++;
			}
		}

	}



	return b;
}


int main()
{
	int a[10]={3,4,6,5,8,1,0,9,2,7};
	int i;
	int*pb=my_sort2(a,10);
	my_sort(a,10);
	
	for( i=0;i<10;i++)
		printf("%d\n",a[i]);

	for( i=0;i<10;i++)
		printf("%d\n",*(pb+i));
	return 0;
}