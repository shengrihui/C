#include <stdio.h>

//结构体作业
//6
int main()
{
	struct s
{int x;
float f;
}a[3];
printf("%d",sizeof(a));
return 0;
}


//5
/*
int main()
{	
	struct
{
int num;
char name[10];
}x[3]={1,"china",2,"USA",3,"England"};

printf("\n%d,%s",x[1].num,x[2].name);
return 0;
}
*/

//3
/*
int main()
{
	struct country
{int num;
char name[10];
}x[5]={1,"China",2,"USA",3,"France",4, "England",5, "Spanish"}; 
struct country *p;
p=x+2;
printf("%d,%c",p->num,(*p).name[2]);
return 0;
}
*/

//1
/*
struct KeyWord
{
char Key[20];
int ID; 
}kw[]={"void",1,"char",2,"int",3,"float",4,"double",5};

int main()
{
printf("%c,%d\n",kw[3].Key[0], kw[3].ID);
return 0;
}
*/