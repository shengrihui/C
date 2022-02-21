#include <stdio.h>
#define PR printf("\n")

int main()
{
	int i,j;
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	int *p1=&a[0][0];
	int (*p2)[4]=a;
	int *p3=a[0];
	int *p4=&;

//################################################
	printf("&a=%p\n",&a);
	
	
	printf("\n");
	printf("a=%p\n",a);
	printf("a+1=%p\n",a+1);

	
	printf("\n");
	printf("a[0]=%p\n",a[0]);
	printf("&a[0]=%p\n",&a[0]);
	printf("p2=%p\n",p2);
	printf("p2+1=%p\n",p2+1);
	printf("p3=%p\n",p3);
	printf("p3+1=%p\n",p3+1);

	printf("\n");
	//printf("a[0][0]=%p\n",a[0][0]);
	printf("&a[0][0]=%p\n",&a[0][0]);
	printf("p1=%p\n",p1);

	//#################################################
	//printf("\n");
	for (i=0;i<12;i++)
	{if(i%4==0)printf("\n");
		printf("*(p1+i)=%d  ",*(p1+i));
	}
	PR;

	
for (i=0;i<12;i++)
	{if(i%4==0)printf("\n");
		printf("p1[i]=%d  ",p1[i]);
	}
	PR;
	PR;

	for (i=0;i<3;i++)
	{for (j=0;j<4;j++)
	{printf("*(p1+i*4+j)=%d  ",*(p1+i*4+j));
	}
	PR;
	}
	PR;
//#####################################################
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("*(*(p2+i)+j)=%d\t",*(*(p2+i)+j));
			printf("(*(p2+i))[j]=%d\t",(*(p2+i))[j]);
			printf("p2[i][j]=%d\t",p2[i][j]);
			printf("*(p2[i]+j)=%d\n",*(p2[i]+j));
		}
		PR;
	}



	
	return 0;
}


/*
int main()
{
	int a[4];
	int *p=a;
	int i;
	for (i=0;i<4;i++)
		scanf("%d",p+i);
	for (i=0;i<4;i++)
		printf("%d ",*(p+i));
	return 0;
}
*/