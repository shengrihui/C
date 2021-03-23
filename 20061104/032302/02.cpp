#include <stdio.h>
#include <math.h>

int main()
{
	float a=1.0,b=1.0,c=1.0,l;
	double area;
	printf("input :");
	scanf("%f %f %f",&a,&b,&c);

	if (a+b>c && +c>b && b+c>a)
	{
		l=(a+b+c)/2;
		area=sqrt(l*(l-a)*(l-b)*(l-c));
		printf("%lf\n",area);
	}
	else
	{
		printf("input error!\n");
	}
	return 0;
}