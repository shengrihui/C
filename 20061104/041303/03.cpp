#include <stdio.h>

int main()
{
	int num1,sum1,sum2;
	int i;

	for (num1=2;num1<=10000;num1++)
	{	
		//���һ������������
		sum1=0;
		//for( i=1; i<num1 ;i++)
		for( i=1;i<=num1/2; i++)
		{
			if(num1%i==0)
			{
				sum1+=i;
			}
		}
		
		//����������ȥ��
		//��������ͱȱ���С��˵�������֮ǰ�������������ظ����
		if (sum1<=num1)
			continue;

		//sum1�����ڶ�������������������
		sum2=0;
		//for (i=1;i<sum1; i++)
		for (i=1;i<=sum1/2;i++)
		{
			if (sum1 %i==0)
			{
				sum2+=i;
			}
		}

		//���
		if (sum2==num1)
			printf("%-6d%-6d\n",num1,sum1);

	}


	return 0;
}