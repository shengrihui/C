#include <stdio.h>


//—°‘Ò≈≈–Ú
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
	datasort(data,n);
	for (int i=0;i<n;i++)
		printf("%-3d",data[i]);
	
	
	printf("\n");
	return 0;
}