#include <stdio.h>

#define Stu 10  //学生
#define Sub 3   //学科

void mysort(float total[],int pm[])
{
	int i,j,p;
	float t;
	for (i=0;i<Stu;i++)
	{
		p=1;
		t=total[i];
		for (j=0;j<Stu;j++)
		{
			if (t<total[j])
				p++;
		}
	pm[i]=p;
	}
}

void func(float score[][Sub],float min[],float max[],float ave[],float total[])
{
	int i,j;
	float maxi,mini,sum,t;
	
	for (i=0;i<Stu;i++)
	{
		total[i]=score[i][0]+score[i][1]+score[i][2];
		//printf("%f\n",total[i]);
	}
	

	for ( j=0;j<Sub;j++)
	{
		maxi=sum=0.0;
		mini=100.0;
		for (i=0;i<Stu;i++)
		{	
			t=score[i][j];
			if (t<mini) mini=t;
			if (t>maxi) maxi=t;
			sum+=t;
		}
		ave[j]=sum/Stu;
		max[j]=maxi;
		min[j]=mini;
		//printf("%f %f \n",mini,maxi);

	}

}

int main()
{
	float score[Stu][Sub]={0};
	float min[Sub],max[Sub],ave[Sub],total[Stu];
	int pm[Stu];
	int i,j;
	for ( i=0;i <Stu;i++)
	{
		score[i][0]=50.0;
		score[i][1]=70.0;
		score[i][2]=60.0;
	}
	score[0][0]=40.0;score[1][0]=60.0;
	score[0][1]=50.0;score[1][1]=90.0;
	score[0][2]=40.0;score[1][2]=80.0;

	func( score,min,max,ave,total);
	mysort(total,pm);
	
	for ( i=0;i<Sub;i++)
		printf("%.1f %.1f %.1f\n",min[i],max[i],ave[i]);
	
	for(i=1;i<=Stu;i++)
	{
		for(j=0;j<Stu;j++)
			if(pm[j]==i)
				printf("%.1f\n",total[j]);
	}

	return 0;
}



