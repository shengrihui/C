#include <stdio.h>
#include <stdlib.h>
int main()
{
	float data1=1.0,data2=2.0,result=3.0;
	char op;

	printf("input data1:");
	scanf("%f",&data1);
	printf("input data2:");
	scanf("%f",&data2);

	printf("input op:");
	getchar();
	scanf("%c",&op);

	switch(op)
	{
	case '+':result=data1+data2;break;
	case '-':result=data1-data2;break;
	case '*':result=data1*data2;break;
	case '/':
		if (data2!=0)
		{result=data1/data2;break;}
	default:
		printf("ERROR!!\n");
		exit(0);
	}
	printf("%.2f%c%.2f=%.2f\n",data1,op,data2,result);
	return 0;

}