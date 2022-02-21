#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//将int保存为二进制文件
/*
int main()
{
	int a = 10000;
	FILE* pf = fopen("test0.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	printf("%d\n", 0x2710);
	return 0;
}
*/

//读写文件
/*
int main()
{
	FILE* pfwrite = fopen("test.txt", "w");
	fputc('b', pfwrite);
	fputc('c', pfwrite);
	fputc('d', pfwrite);
	fclose(pfwrite);
	pfwrite = NULL;

	FILE* pfread = fopen("test.txt", "r");
	if (pfread == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("%c\n", fgetc(pfread));
	printf("%c\n", fgetc(pfread));
	printf("%c\n", fgetc(pfread));
	fclose(pfread);
	pfread = NULL;
	
	return 0;

}
*/


//stdin  stdout
/*
int main()
{
	char ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}
*/


//fgets fputs
/*
int main()
{
	char ch[1024] = { 0 };
	FILE* pf = fopen("test.txt", "r");

	fgets(ch, 1024, pf);
	puts(ch);
	fgets(ch, 1024, pf);
	printf("%s", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}

int main()
{
	FILE* pf2 = fopen("test1.txt", "w");
	fputs("HELLO\n", pf2);
	fputs("WORLD\n",pf2);
	fclose(pf2);
	pf2 = NULL;
	return 0;
}
*/


//fprintf fscanf
/*
struct stu
{
	int num;
	float score;
	char arr[30];
};

int main()
{
	struct stu s = { 100,3.14f,"helloworld" };
	FILE* pf = fopen("test.txt", "w");
	fprintf(pf, "%d %f %s\n", s.num, s.score, s.arr);
	fclose(pf);
	pf = NULL;

	FILE* pf2 = fopen("test.txt", "r");
	struct stu s2;
	fscanf(pf2, "%d %f %s", &s2.num, &s2.score, s2.arr);
	printf("%d %f %s\n", s2.num, s2.score, s2.arr);
	fclose(pf2);
	pf2 = NULL;


	return 0;
}
*/

//sprintf sscanf
/*
struct stu
{
	int num;
	float score;
	char arr[30];
};

int main()
{
	char buf[1024] = { 0 };
	struct stu s = { 100,3.14,"helloworld" };
	struct stu temp = { 0 };
	puts(buf);
	sprintf(buf, "num:%d score:%f arr:%s", s.num, s.score, s.arr);
	puts(buf);
	

	fprintf(stdout, "struct temp : %d %f %s\n", temp.num, temp.score, temp.arr);
	sscanf(buf, "num:%d score:%f arr:%s", &temp.num, &temp.score, temp.arr);
	fprintf(stdout, "struct temp : %d %f %s\n", temp.num, temp.score, temp.arr);

	return 0;
}
*/


//read write
struct stu
{
	int num;
	float score;
	char arr[30];
};

int main()
{
	struct stu s1 = { 100,3.14f,"helloworld" };
	struct stu s2 = { 666,9.99f,"abcdefg" };
	struct stu arr[2] = { s1,s2 };

	FILE* p1 = fopen("test2.txt", "wb");
	fwrite(&s1, sizeof(s1), 1, p1);
	fwrite(&s2, sizeof(s1), 1, p1);
	fclose(p1);
	p1 = NULL;

	struct stu t1 = { 0 };
	struct stu t2 = { 0 };
	struct stu arr2[2] = { t1,t2 };
	FILE* p2 = fopen("test2.txt", "rb");
	fread(&t1, sizeof(t2), 1, p2);
	fread(&t2, sizeof(t2), 1, p2);
	fclose(p2);
	p2 = NULL;
	printf("%d %f %s\n", t1.num, t1.score, t1.arr);
	printf("%d %f %s\n", t2.num, t2.score, t2.arr);
	return 0;
}






