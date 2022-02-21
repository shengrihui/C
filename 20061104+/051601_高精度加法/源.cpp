#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//数字最大长度
#define Len 100

//输入一个数
char* getnum()
{
	char ch;
	int i=0;
	char* num;
	num = (char*)malloc((Len+1) * sizeof(char));
Begin:
	printf("输入一个数，以回车结束：");
	i = 0;
	//清楚若以0开头
	while ((ch = getchar()) == '0')
		;
	while (ch != '\n')
	{
		num[i] = ch;
		i++;
		ch = getchar();
		if (i > Len)
		{
			printf("输入数字过长，请重新输入");
			goto Begin;
		}
	}
	num[i] = '\0';
	return num;

}

//获得某一个数的长度
//返回的sz、不包括'\0'，也就是sz仅仅是数字的长度
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
	//两个数字的较长和较短的长度
	int max_sz = sz1 > sz2 ? sz1 : sz2;
	int min_sz = sz1 < sz2 ? sz1 : sz2;

	//old_num指向较短的那个数
	//将较短的那个数前面补上0，并存到新空间new1_num
	char* old_num;
	char* new1_num = (char*)malloc(max_sz + 1);  //因为sz仅仅是数字的长度，所以还要加1存'\0'
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

	//进位，临时
	char jin, t;
	//结果。加2因为‘、0’和可能的多一位
	char* ret = (char*)malloc(max_sz + 2);
	int i, j;

	//将较短的数存到new1_num
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

		//if处理进位
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
	//最高位是0，结果指向ret+1
	//最高位是1，指向ret
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
	//两个数长的位数
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