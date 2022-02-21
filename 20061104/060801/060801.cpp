#include <stdio.h>
#include <string.h>

#define N 10
struct student
{
	long num;
	char name[20];
	char sex;
	int score;
};

void print(struct student* stu[])
{
	int i;
	for (i=0;i<N;i++)
	{
		printf("%6ld %s %c %d",(*(stu+i))->num,(*(stu+i))->name,(*(stu+i))->sex,(*(stu+i))->score);
		printf("\n");
	}
}

void s_sort(struct student* stu[])
{
	int i,j;
	struct student temp;
	for (i=0;i<N-1;i++)
	{
		for (j=i+1;j<N;j++)
		{
			if( (*stu[i]).score > (*stu[j]).score )
			{
				temp=*stu[i];
				*stu[i]=*stu[j];
				*stu[j]=temp;
			}
		}
	}
}

int main()
{
	char *mingzi[6]={"zhang","li","wang","sheng","zhu","yao"};
	char sexx[3]={'f','m','s'};
	
	struct student stu[10];
	struct student *pstu[10];
	
	int i;
	for (i=0;i<N;i++)
	{
		stu[i].num=i+1;
		strcpy(stu[i].name,mingzi[i%6]);
		stu[i].sex=sexx[i%3];
		stu[i].score=(100-i*5);
		pstu[i]=&stu[i];
	}




	print(pstu);
	
	printf("\n");
	s_sort(pstu);
	
	
	print(pstu);

	return 0;
}