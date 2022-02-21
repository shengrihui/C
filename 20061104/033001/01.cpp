#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float data1=0.0,data2=2.0,result;
	char op;

	

	printf("input two datas:");
	scanf("%f%f",&data1,&data2);
	printf("input op:");
	getchar();
	scanf("%c",&op);

	switch(op)
	{
	case '+':
		result=data1+data2;break;
	case '-':
		result=data1-data2;break;
	case '*':
		result=data1*data2;break;
	case '/':
		if (fabs(data2)>=1e-5)
			result=data1/data2;
	default:
		printf("error!\n");
		exit(0);
	}
	printf("%.2f%c%.2f=%.2f\n",data1,op,data2,result);
	return 0;
}