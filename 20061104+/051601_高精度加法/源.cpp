#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//������󳤶�
#define Len 100

//����һ����
char* getnum()
{
	char ch;
	int i=0;
	char* num;
	num = (char*)malloc((Len+1) * sizeof(char));
Begin:
	printf("����һ�������Իس�������");
	i = 0;
	//�������0��ͷ
	while ((ch = getchar()) == '0')
		;
	while (ch != '\n')
	{
		num[i] = ch;
		i++;
		ch = getchar();
		if (i > Len)
		{
			printf("�������ֹ���������������");
			goto Begin;
		}
	}
	num[i] = '\0';
	return num;

}

//���ĳһ�����ĳ���
//���ص�sz��������'\0'��Ҳ����sz���������ֵĳ���
int get_size(char* start)
{
	int sz = 0;
	char* end = start;
	while (*end != '\0')
	{
		sz++;
		end++;
	}
	return sz;
}


char* add(char* num1, int sz1, char* num2, int sz2)
{
	//�������ֵĽϳ��ͽ϶̵ĳ���
	int max_sz = sz1 > sz2 ? sz1 : sz2;
	int min_sz = sz1 < sz2 ? sz1 : sz2;

	//old_numָ��϶̵��Ǹ���
	//���϶̵��Ǹ���ǰ�油��0�����浽�¿ռ�new1_num
	char* old_num;
	char* new1_num = (char*)malloc(max_sz + 1);  //��Ϊsz���������ֵĳ��ȣ����Ի�Ҫ��1��'\0'
	char* new2_num;
	if (sz1 > sz2)
	{
		old_num = num2;
		new2_num = num1;
	}
	else
	{
		old_num = num1;
		new2_num = num2;

	}

	//��λ����ʱ
	char jin, t;
	//�������2��Ϊ����0���Ϳ��ܵĶ�һλ
	char* ret = (char*)malloc(max_sz + 2);
	int i, j;

	//���϶̵����浽new1_num
	for (i = min_sz, j = max_sz; j >= 0; i--, j--)
	{
		if (i >= 0)
			new1_num[j] = old_num[i];
		else
			new1_num[j] = '0';
	}


	jin = '0';
	ret[max_sz + 1] = '\0';
	for (i = max_sz, j = max_sz - 1; j >= 0; j--, i--)
	{
		t = jin + new1_num[j] + new2_num[j] - '0' * 2;

		//if�����λ
		if (t > '9')
		{
			jin = '1';
			t = t - '9' - 1 + '0';
		}
		else
		{
			jin = '0';
		}
		ret[i] = t;
		//printf("%c ", ret[i]);
	}

	ret[i] = jin;
	//���λ��0�����ָ��ret+1
	//���λ��1��ָ��ret
	if (jin == '0')
	{
		return ret + 1;
	}
	else if (jin == '1')
	{
		return ret;
	}
}
	

int main()
{
	int i;
	char* num1  = getnum();
	char* num2 = getnum();
	//����������λ��
	int sz1 = get_size(num1);
	int sz2 = get_size(num2);
	char * ret=add(num1, sz1, num2, sz2);
	i = 0;
	while (*(ret + i) != '\0')
	{
		printf("%c", *(ret + i));
		i++;
	}

	return 0;
}


/*
void add(char* num1, int sz1, char* num2, int sz2)
{
	int ret_sz = (sz1 > sz2 ? sz1 : sz2) + 1;
	char* ret = (char*)malloc(ret_sz);
	int i = sz1-1, j = sz2-1,k=ret_sz;

	char jin = '0',t;

	for (; i >= 0&&j >= 0; i--, j--,k--)
	{
		t = num1[i] + num2[j] + jin - 2 * '0';

		//printf("%d %d %d ", num1[i], num2[j], jin);
		//printf("%c %c %c ", num1[i],num2[j],jin);
		if (t > '9')
		{
			jin = '1';
			t = t - '9' - 1 + '0';
		}
		ret[k] = t;
		//printf("%c ", t);
		printf("%d \n", t);
	}
	printf("%d %d\n", i, j);
	if (i<0&&j<0)
	{
		ret[k] = jin;
	}
	if (i >= 0)
	{
		ret[k] = jin + num1[i] - '0';
		printf("%d %d %d\n",jin, ret[k], num1[i]);
		i--; k--;
		
		for (; i >= 0; i--, k--)
			ret[k] = num1[i];
	}
	if(j>=0)
	{
		ret[k] = jin + num2[j] - '0';
		j--;k--;
		for (; j >= 0; j--, k--)
			ret[k] = num2[j];
	}
	
	for (k = 0; k <=ret_sz; k++)
		
		printf("%c ", ret[k]);
}
*/