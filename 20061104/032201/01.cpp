#include <stdio.h>

void

































































































#include <stdio.h>

void score_p()
{
	float score;
	printf("input the score:");
	scanf("%f",&score);
	switch((int)score/10)
	{
		case 10:
		case 9:
			printf("a\n");
			break;
		case 8:
			printf("b\n");
			break;
		case 7:
		case 6:
			printf("c\n");
			break;
		default:
			printf("d\n");
		
	}
}
int main()
{
	int b;
	printf("input the b:");
	scanf("%d",&b);
	for(int a=b;a<=10;a++)
	{
		score_p();
		//printf("%d",a)
		
	}
	return 0;
}
