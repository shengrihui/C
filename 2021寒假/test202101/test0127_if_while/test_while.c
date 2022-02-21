#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//大小写转换
/*
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A' && ch <= 'Z')
			putchar(ch + 32);
		else if (ch >= 'a' && ch <= 'z')
			putchar(ch - 32);
		else
			putchar(ch);
	}

	return 0;
}
*/


//while password
/*
int main()
{
	char password[20] = { '0' };
	int ch = 0;
	printf("请输入密码：");
	scanf("%s", &password);
	printf("%s\n", password);
	
	while((ch=getchar())!='\n')
	{
		;
	}
	printf("确认密码？（Y/N）：");
	ch = getchar();
	if ('Y' == ch)
		printf("ok");
	else
		printf("quit");
	
	
	return 0;
}

*/
