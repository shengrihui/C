//���ܵķ�ʽ�ǽ��ַ�����ÿ���ַ����������ַ����е�λ�ú�һ��ƫ��ֵ5
//�Ե�ǰ�����ַ�������


/*

#include<stdio.h>
#include<string.h>
int main()

{
	int result=1;
	int i;
	int count=0;
	char Text[128]={'\0'};    //����һ�������ַ�����
	char cry[128]={'\0'};      //����һ�������ַ�����
	while(1)
	{	if(result==1)
		{
			printf("������Ҫ���ܵ�����:\n");
			scanf("%s",&Text);
			count=strlen(Text);
			for(i=0;i<count;i++)
			{
				cry[i]=Text[i]+i+5;
				

			}
			cry[i]='\0';
			printf("����֮�������Ϊ:%s\n",cry);

		}
		else if(result==2)
		{   
			count=strlen(cry);
			for(i=0;i<count;i++)
			{
				Text[i]=cry[i]-i-5;
				
			}
			Text[i]='\0';
			printf("����֮�������Ϊ:%s\n",Text);


		}
		else if(result==3)
		{
			break;
		}
		else
		{
			printf("��������,���������������:\n");
		}
	
		printf("�����Ľ��м���������1,�����Ľ��н���������2,�˳�ϵͳ������3.\n");
		printf("�����������:\n");
		scanf("%d",&result);
	}

	return 0;
}

  */



//���ܵķ�ʽ�ǽ��ַ�����ÿ���ַ����������ַ����е�λ�ú�һ��ƫ��ֵ5
//�Ե�ǰ�����ַ�������




#include<stdio.h>
#include<string.h>
int main()

{
	int result;
	int i;
	int count=0;
	char ming[128]={'\0'};    //����һ�������ַ�����
	char mi[128]={'\0'};      //����һ�������ַ�����
	while(1)
	{
		printf("�����Ľ��м���������1,�����Ľ��н���������2,�˳�ϵͳ������3.\n");
		printf("�����������:\n");
		scanf("%d",&result);
		getchar();
		if(result==1)
		{
			printf("������Ҫ���ܵ�����:\n");
			scanf("%s",ming);
			count=strlen(ming);
			for(i=0;i<count;i++)
			{
				mi[i]=ming[i]+i+5;
				printf("%d mi:%d ming:%d\n",i,mi[i],ming[i]);


			}
			mi[i]='\0';
			printf("����֮�������Ϊ:%s\n",mi);

		}
		else if(result==2)
		{
			printf("������Ҫ:\n");
			scanf("%s",mi);
			count=strlen(mi);
			for(i=0;i<count;i++)
			{
				ming[i]=mi[i]-i-5;
				printf("%d mi:%d ming:%d\n",i,mi[i],ming[i]);
				
			}
			ming[i]='\0';
			printf("����֮�������Ϊ:%s\n",ming);


		}
		else if(result==3)
		{
			break;
		}
		else
		{
			printf("��������,���������������:\n");
		}
	
		
	}

	return 0;
}
