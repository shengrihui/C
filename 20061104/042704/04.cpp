#include <stdio.h>


int mysearch(int a[],int n,int x)
{
	int i=0 ,j=n-1 ,mid;
	
	while (i<=j)
	{
		mid=(i+j)/2;
		if (a[mid]<x)
			i=mid+1;
		else if (a[mid]>x)
			j=mid-1;
		else if (a[mid]==x)
			return mid;
	}
	if (i>j)
		return -1;
}

//Ñ¡ÔñÅÅĞò
void datasort(int a[],int n)
{
	int i,j,min,t;
	for (i=0;i<n-1;i++)
	{	
		min=i;
		for (j=i+1;j<n;j++)
		{	
			if (a[j]<a[min])
				min=j;
		}
		if (min!=i)
		{
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
	}

}

int main()
{
	int data[]={4,3,6,5,7,8,9,3,0,1,2};
	int n=sizeof(data)/sizeof(data[0]);
	int x;
	datasort(data,n);
	for (int i=0;i<n;i++)
		printf("%-3d",data[i]);
	
	
	printf("\n");

	printf("dd:\n");
	scanf("%d",&x);
	printf("%d\n",mysearch(data,n,x));
	return 0;
}