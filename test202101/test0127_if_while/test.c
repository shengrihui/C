#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//�žų˷���

int main()
{
	int i, j;
	for (i=1;i<=9;i++)
	{
		for (j = 1;j<=i;j++)
		{
			printf("%d x %d = %-2d   ", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}



//��10�����������
/*
int main()
{
	int i = 0;
	int arr[] = { 5,-58,10,16,-1,0,16,98,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
*/


//������ͣ�1/2-1/3+....1/100
/*
int main()
{
	int i = 0;
	double s = 0;
	short f = 1;
	for (i = 1; i <= 100; i++)
	{
		s += f * 1.0 / i;
		f = -f;
	}
	printf("%lf\n", s);
	return 0;
}
*/


//��9�ĸ���,1~100֮�����9�Ĵ���
/*
int main()
{
	int i = 0;
	int c = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			c++;
		if (i / 10 == 9)
			c++;
	}
	printf("%\nһ����%d����", c);
	return 0;
}
*/


//����
//ɸѡ��
/*
#include <math.h>
int main()
{
	int i, j, a[100];
	int cc = 0;//ѭ������
	for (i = 100; i < 200; i++)
	{
		if (i % 2)
			a[i - 100] = i;
		else
			a[i - 100] = 0;
	}
	for (i = 3; i <= sqrt(200); i++)
	{
		for (j = 101; j < 200; j+=2)
		{
			cc++;
			if (a[j - 100] % i == 0 && a[j-100]!=0)
			{
				a[j - 100] = 0;
				
			}
		}
	}
	j = 0;
	for (i = 0; i < 100; i++)
	{
		if (a[i] != 0)
		{
			printf("%d ", a[i]);
			j++;
		}
	}
	printf("\n%d��ѭ���Ⱥ���%d\n", j,cc);
	return 0;
}
*/
//�Գ���
/*
#include <math.h>
int main()
{
	int i, j;
	int c = 0;
	int cc = 0; //ѭ������
	int x;
	for (i = 101; i < 200; i += 2)
	{
		x = 0;
		for (j = 3; j <= sqrt(i); j += 2)
		{
			cc++;
			if (i % j == 0)
			{
				x = 1;
				break;
			}
		}
		if (x==0)
		{
			printf("%d  ", i);
			c++;
		}
	}
	printf("\n%d��ѭ��������%d\n", c, cc);
	return 0;
}
*/


//����
/*
int main()
{
	int year = 0;
	int c = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year%4==0 &&year%100!=0) || year%400==0)
		{
			printf("%d  ", year);
			c++;
		}
	}
	printf("\n%d", c);
	return 0;
}
*/


//3�ı���
/*
int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);
	}
	return 0;
}
*/


//��С������
/*
int main()
{
	int a, b, i, m;
	scanf("%d %d", &a, &b);
	m = a < b ? a : b;
	for (i = m; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d��%d�����Լ���ǣ�%d\n", a, b, i);
			break;
		}
	}
	printf("%d��%d����С�������ǣ�%d\n", a, b, a * b / i);
	return 0;
}
*/


//���Լ��
/*
int main()
{
	int n, m, r;
	int a, b;
	scanf("%d%d", &m, &n);
	a = m > n ? m : n;
	b = m <= n ? m : n;
	while(r=a%b)
	{
		a = b;
		b = r;
	}
	printf("����ǣ�%d", b);
	return 0;
}
*/

/*
#define Min(x,y) (x<=y?x:y)
#define Max(x,y) (x<y?y:x)
int main()
{
	int a, b, r, i;
	int m, n;
	scanf("%d%d", &a, &b);
	m = Max(a, b);
	n = Min(a, b);
	r = m % n;
	while (r != 0)
	{
		m = Max(r, n);
		n = Min(r, n);
		r = m % n;
	}
	printf("����ǣ�%d",n);
}
*/

/*
int main()
{
	int a, b, i, m;
	scanf("%d %d", &a, &b);
	m = a < b ? a : b;
	for (i = m; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d��%d�����Լ���ǣ�%d", a, b, i);
			break;
		}
	}
	return 0;
}
*/


//���������Ӵ�С����
/*
int main()
{
	int a, b, c, t;
	scanf("%d %d %d", &a, &b, &c);
	while(!(a>=b && b>=c))
	{
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
}
	printf("%d %d %d", a, b, c);

	return 0;
}
*/


//�������������
/*
#include <Windows.h>
#include <stdlib.h>
int main()
{
	char arr1[] = "hello world!!";
	char arr2[] = "#############";
	int l = 0;
	int r = strlen(arr2)-1;
	printf("%s\n", arr2);
	do
	{
		Sleep(1000);
		system("cls");
		arr2[l] = arr1[l];
		arr2[r] = arr1[r];
		printf("%s\n", arr2);
		l++;
		r--;
	} while (l <= r);
	return 0;
}
*/

/*
int main()
{
	char arr[] = "Hello world!!";
	int l = strlen(arr);
	int i = 0;
	int j = 0;
	int k = 0;
	int s = 0;
	for (j = 0; j < =l; j++)
		printf("#");
	printf("\n");
	for (i = 0; i <= l / 2; i++)
	{	
		for (j = 0; j <= i; j++)
		{
			printf("%c", arr[j]);
		}
		for (j = 0; j <= (l - 2 * i-2); j++)
		{
			printf("#");
		}
		for (j = (l - i-1); j < l; j++)
		{
			printf("%c", arr[j]);
		}
		printf("\n");
	}
	return 0;
}
*/


//����
/*
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int j = 0;
	int k = 10;
	int m = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ�����\n");

	
	i = 0;
	j = sz - 1;
	while (i <= j)
	{
		m = (i + j) / 2;
		if (arr[m] == k)
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", m);
			break;
		}
		else if (arr[m] < k)
		{
			i = m + 1;
		}
		else
		{
			j = m - 1;
		}

	}
	if(i>j)
		printf("�Ҳ�����\n");


	return 0;
}
*/


//�׳�
/*
int  main()
{
	int i = 0;
	int j = 0;
	int sum = 1;
	int s = 1;
	int n = 0;
	printf("����n�Ľ׳ˣ�������n��ֵ��");
	n = 3;
	//scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d�Ľ׳˽���ǣ�%d\n", n, sum);


	i = 1;
	j = 1;
	s = 1;
	sum = 0;
	while (i <= 10)
	{
		s *= i;
		//for (; j <= i; j++)
		//{
			//s *= j;
		//}
		sum += s;
		i++;
	}
	printf("1��10�Ľ׳˵ĺͽ���ǣ�%d\n", sum);
	
	sum = 0;
	for (i = 1, s = 1; i <= 10; i++, s *= i)
	{
		sum += s;
	}
	printf("1��10�Ľ׳˵ĺͽ���ǣ�%d\n", sum);
	
	



	
	return 0;
}

*/

