#include <stdio.h>
int strcmp(char *ch1,char *ch2)
{
	while(*ch1!='\0' && *ch2!='\0')
	{
		if (*ch1==*ch2)
		{
			ch1++;ch2++;
		}
		else
		{
			return (*ch1)-(*ch2);
		}
	}
	
	if (*ch1!='\0' && *ch2=='\0')
		return 1;
	if (*ch1=='\0' && *ch2!='\0')
		return -1;
	if (*ch1=='\0' && *ch2=='\0')
		return 0;
}

int main()
{
	char ch1[1000],ch2[1000];
	int result;
	printf("�����һ���ַ�����");
	scanf("%s",ch1);
	printf("����ڶ����ַ�����");
	scanf("%s",ch2);
	
	result=strcmp(ch1,ch2);
	if(result==0)
		printf("�ַ���1�����ַ���2\n");
	else if(result>0)
		printf("�ַ���1�����ַ���2\n");
	else if (result<0 )
		printf("�ַ���1С���ַ���2\n");


	return 0;
}

/*

int main()
{
	int x;
	double y=800.0;
	printf("���뱨��������");
	scanf("%d;",&x);
	if( x>0 && x <3  )
		y=800;
	else if ( x>=3 && x<5)
		y=y*0.95;
	else if (x>=5 && x<7)
		y=y*0.9;
	else if (x>=8 )
		y=y*0.8;
	else if (x<=0)
		printf("������������\n");
	printf("ÿ�˸�����%lfԪ��\n");
	return 0;
}
*/