#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//结构体
/*
struct person
{
	char name[20];
	char pid[18];
	short age;
	short h;
};
int main() {
	struct person srh = { "盛日辉","331021199911210018", 21,172 };
	struct person* psrh = &srh;
	printf("姓名：%s\n", srh.name);
	printf("身份证号：%s\n", srh.pid);
	printf("年龄：%d\n",psrh->age);
	printf("身高：%d\n", (*psrh).h);
	return 0;
}
*/





//地址
/*
int main() {

	int n = 10;
	int* pn = &n;
	printf("%d\n", n);
	printf("%d\n", *pn);
	*pn = 55;
	printf("%d\n", n);

	printf("sizepf n=%d\n", sizeof(n) );
	printf("sizeof *pn =%d\n", sizeof(*pn));
	printf("sizeof pn =%d\n", sizeof(pn));

	return 0;
}
*/


//static
/*
int main() {
	extern int g;
	printf("%d\n", g);
	return 0;
}
*/