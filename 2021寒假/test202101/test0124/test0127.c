#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//�ṹ��
/*
struct person
{
	char name[20];
	char pid[18];
	short age;
	short h;
};
int main() {
	struct person srh = { "ʢ�ջ�","331021199911210018", 21,172 };
	struct person* psrh = &srh;
	printf("������%s\n", srh.name);
	printf("���֤�ţ�%s\n", srh.pid);
	printf("���䣺%d\n",psrh->age);
	printf("��ߣ�%d\n", (*psrh).h);
	return 0;
}
*/





//��ַ
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