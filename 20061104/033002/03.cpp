#include <stdio.h>
#include <math.h>

int main()
{
	float a=1.0,b=1.0,c=1.0;
	//int a,b,c;
	double l,s;
	int type;
	printf("���������߳���");
	scanf("%d%d%d",&a,&b,&c);

	if (a+b>c && a+c>b && b+c>a )
	{
		l=(a+b+c)/2;
		s=sqrt( l*(l-a)*(l-b)*(l-c) );

		if (a==b && a==c)
			type=1;
		else if (a==b || a==c || b==c )
			type=2;
		if (a*a==(b*b+c*c) || b*b==(a*a+c*c) || c*c==(a*a+b*b) )
		{
			if (type==2)
				type=23;
			else
				type=3;
		}

		switch (type)
		{case 1:
			printf("���ǵȱ������Σ�");
			break;
		case 2:
			printf("���ǵ��������Σ�");
			break;
		case 3:
			printf("����ֱ�������Σ�");
			break;
		case 23:
			printf("���ǵ���ֱ�������Σ�");
			break;
		default:
			printf("����һ�������Σ�");
		}
		
			printf("�����%lf\n",s);
	}
	else
		printf("���ܹ��������Ρ�\n");
	return 0;




	return 0;
}