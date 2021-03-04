#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//swich-case
/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("n=%d  m=%d\n", n, m);
	return 0;
}
*/


//Êä³ö»ùÊý
/*

int main()
{
	int i = 1;
	while (i <= 100)
	{
		printf("%d\n", i);
		i += 2;
	}
	return 0;
}

int main() {
	int i = 0;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}
*/