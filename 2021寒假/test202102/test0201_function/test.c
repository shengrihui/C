#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>

//����
/*
int is_prime(int n)
{
	int i, j;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	printf("����һ��������");
	scanf("%d", &n);
	if (is_prime(n) == 1)
		printf("%d��������\n", n);
	else
		printf("%d����������\n", n);
	for (n = 100; n <= 200; n++)
	{
		if (is_prime(n))
			printf("%d  ", n);
	}

	return 0;
}
*/


//���ֲ���
/*
int search(int k, int d[], int sz)
{

	int i = 0;
	int j = sz - 1;
	int m = 0;
	while (i <= j)
	{

		m = (i + j) / 2;
		if (d[m] == k)
			return m;
		else if (k < d[m])
			j = m - 1;
		else if (k > d[m])
			i = m + 1;
	}
	if (i > j)
		return -1;
}

int main()
{
	int arr[] = { 0,1,2,4,5,6,7,8,10 };
	int k = 3;
	int ret = search(k, arr, sizeof(arr) / sizeof(arr[0]));
	if (ret == -1)
		printf("%d���������С�", k);
	else
		printf("%d�������е��±���%d", k, ret);
}
*/


//num����
/*
void add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);
	add(&num);
	printf("num=%d\n", num);
	return 0;
}
*/


//��ʽ
/*
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}
*/



//�ݹ�-˳������޷�������
/*
void  print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);

	//if (n / 10 == 0)
		//printf("%d\n", n % 10);
	//else
	//{
		//print(n / 10);
		//printf("%d\n", n % 10);
	//}
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}
*/


//�ݹ�-��������ʱ�������ַ�������
/*
int len(char* str)
{
	if (*str == '\0')
		return 0;
	return len(str + 1) + 1;
}

int main()
{
	char arr[] = "abc";
	printf("%d", len(&arr));
	return 0;
}
*/


//�ݹ�-쳲�����
/*
int  func(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return func(n - 1) + func(n - 2);
}

int main()
{
	int n = 0;
	for (n=1;n<=10;n++)
	{
		printf("%d ", func(n));
	}
	return 0;
}
*/

/*
int main()
{
	int a = 1;
	int b = 1;
	int n = 10;
	int i = 0;
	int t = 0;
	for (i=3;i<=n;i++)
	{
		t = b;
		b = a + b;
		a = t;
	}
	printf("%d\n", b);

	return 0;
}
*/






