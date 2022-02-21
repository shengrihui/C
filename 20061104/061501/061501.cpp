#include <stdio.h>

#define TOTAL 2
struct 
{
	char name[20];
	int num;
	char sex;
	char profession;
	union {
		char subject[15];
		float score;
	}sc;
}bodys[TOTAL];

int main()
{
	int i;

	for (i=0;i<TOTAL;i++)
	{
		printf("input info..");
		scanf("%s %d %c %c",bodys[i].name,&(bodys[i].num),&(bodys[i].sex),&(bodys[i].profession));
		if (bodys[i].profession=='t')
		{	printf("input subject..");
			scanf("%s",&(bodys[i].sc.subject));}
		else
		{	printf("input score...");
			scanf("%f",&(bodys[i].sc.score));
		}
	}

	for (i=0;i<TOTAL;i++)
	{
		printf("%s %d %c %c",bodys[i].name,bodys[i].num,bodys[i].sex,bodys[i].profession);
		if (bodys[i].profession=='s')
			printf(" %lf\n",bodys[i].sc.score);
		else if(bodys[i].profession=='t')
			printf(" %s\n",bodys[i].sc.subject);
	}


	return 0;
}