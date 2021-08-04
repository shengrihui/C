#include <stdio.h>

//static地址不变
/*
int* test()
{
	static int i = 0;
	printf("%d\n", i);
	return &i;
}

int main()
{

	int* t = test();

	printf("%p\n", t);
	*t = 55;
	printf("%p\n", test());
	return 0;
}
*/

/*
int main()
{
	int a = 10;
	int* pa = &a;
	int* pb = pa;
	printf("%d %d %d\n", a, *pa, *pb);
	*pb = 333;
	printf("%d %d %d\n", a, *pa, *pb);

	return 0;
}
*/

//指针减指针算字符串长度
/*
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
		end++;
	return end - start;
}

int main()
{
	char arr[] ="abc" ;
	printf("%d\n", my_strlen(arr));
	return 0;
}
*/

//指针数组
int main()
{
	int a = 10, b = 20, c = 30;
	int* arr[3] = { &a,&b,&c };//指针数组
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *arr[i]);
	}
	return 0;
}