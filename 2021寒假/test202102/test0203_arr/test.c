#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


int main()
{
	char arr[3];
	printf("a\bb");
	return 0;
}





//√∞≈∆≈≈–Ú
/*
#include <time.h>
void Bubble_sort(int arr[], int sz)
{
	int i = 0, j = 0, t = 0;;
	
	for (i = 0; i < sz-1; i++)
	{
		for (j = sz-1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				t = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = t;
			}

		}
	}

}

int main()
{
	int arr[10];
	int i = 0;
	int sz = sizeof(arr) / 4;
	srand((unsigned int)time(NULL));
	for (i = 0; i < sz; i++)
	{
		arr[i] = rand() % 1000;
		printf("%d  %p\n",arr[i], &arr[i]);
	}
	printf("\n\n");
	Bubble_sort(arr, sz);
	printf("\n\n");

	for (i = 0; i < sz; i++)
	{
		printf("%d  %p\n", arr[i],&arr[i]);
	}
	return 0;
}
*/




//◊÷∑˚¥Æ ˝◊Èsizeof£¨strlen
/*
int main()
{
	char arr1[] = "abc";
	char arr2[3] = "abc";
	char arr3[] =  {'a','b','c'};
	char arr4[5] = { 'a',98,99 ,'\0' };
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", sizeof(arr3));
	printf("%d\n", sizeof(arr4));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	printf("%d\n", strlen(arr4));
	return 0;
}
*/