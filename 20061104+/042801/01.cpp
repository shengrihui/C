//加密的方式是将字符串中每个字符加上她在字符串中的位置和一个偏移值5
//对当前加密字符串解密


/*

#include<stdio.h>
#include<string.h>
int main()

{
	int result=1;
	int i;
	int count=0;
	char Text[128]={'\0'};    //定义一个名文字符数组
	char cry[128]={'\0'};      //定义一个密文字符数组
	while(1)
	{	if(result==1)
		{
			printf("输入需要加密的铭文:\n");
			scanf("%s",&Text);
			count=strlen(Text);
			for(i=0;i<count;i++)
			{
				cry[i]=Text[i]+i+5;
				

			}
			cry[i]='\0';
			printf("加密之后的密文为:%s\n",cry);

		}
		else if(result==2)
		{   
			count=strlen(cry);
			for(i=0;i<count;i++)
			{
				Text[i]=cry[i]-i-5;
				
			}
			Text[i]='\0';
			printf("解密之后的名文为:%s\n",Text);


		}
		else if(result==3)
		{
			break;
		}
		else
		{
			printf("输入有误,请重新输入命令符:\n");
		}
	
		printf("对铭文进行加密请输入1,对密文进行解密请输入2,退出系统请输入3.\n");
		printf("请输入命令符:\n");
		scanf("%d",&result);
	}

	return 0;
}

  */



//加密的方式是将字符串中每个字符加上她在字符串中的位置和一个偏移值5
//对当前加密字符串解密




#include<stdio.h>
#include<string.h>
int main()

{
	int result;
	int i;
	int count=0;
	char ming[128]={'\0'};    //定义一个名文字符数组
	char mi[128]={'\0'};      //定义一个密文字符数组
	while(1)
	{
		printf("对铭文进行加密请输入1,对密文进行解密请输入2,退出系统请输入3.\n");
		printf("请输入命令符:\n");
		scanf("%d",&result);
		getchar();
		if(result==1)
		{
			printf("输入需要加密的铭文:\n");
			scanf("%s",ming);
			count=strlen(ming);
			for(i=0;i<count;i++)
			{
				mi[i]=ming[i]+i+5;
				printf("%d mi:%d ming:%d\n",i,mi[i],ming[i]);


			}
			mi[i]='\0';
			printf("加密之后的密文为:%s\n",mi);

		}
		else if(result==2)
		{
			printf("输入需要:\n");
			scanf("%s",mi);
			count=strlen(mi);
			for(i=0;i<count;i++)
			{
				ming[i]=mi[i]-i-5;
				printf("%d mi:%d ming:%d\n",i,mi[i],ming[i]);
				
			}
			ming[i]='\0';
			printf("解密之后的名文为:%s\n",ming);


		}
		else if(result==3)
		{
			break;
		}
		else
		{
			printf("输入有误,请重新输入命令符:\n");
		}
	
		
	}

	return 0;
}
