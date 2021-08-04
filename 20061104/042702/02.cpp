//ц╟ещеепР
#include <stdio.h>

void datasort(int a[],int n)
{
	int i , j,temp;
	for (i=0;i<n;i++)
	{
		for (j=n;j>i;j--)
		{
			if (a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
	int main()
	{
		int data[]={5,2,3,6,4,0,1,9,7,8};
		int n=sizeof(data)/sizeof(data[0]);
		printf("%d\n",sizeof(data));
		datasort(data,n);
		for (int i=0;i<n;i++)
			printf("%-3d",data[i]);
		
		printf("\n");
		return 0;
		
	}
