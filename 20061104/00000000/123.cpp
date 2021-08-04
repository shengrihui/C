#include <stdio.h>
#include <string.h>
#define N 3
struct Stu
{
    int num;
    char name[20];
    float xuanxiu;
    float shiyan;
    float bixiu;

}stu[N];
void in()
{
    int i,m=0;
    char ch[2];
    printf("please input (y/n):\n");
    scanf("%s",ch);
    for(i=0;i<N;i++)
    {
        printf("NO %d student:\n",i+1);
        printf("number:\n");
        scanf("%d",&stu[i].num);
        
		printf("name:\n");
        scanf("%s",&stu[i].name);
        
		printf("xuanxiu score:\n");
        scanf("%f",&stu[i].xuanxiu);
        
		printf("shiyan score:\n");
        scanf("%f",&stu[i].shiyan);
        printf("bixiu score:\n");
        scanf("%f",&stu[i].bixiu);
/**<       stu[m].sum=stu[m].xuanxiu*fxuanxiu+stu[m].shiyan*fshiyan+stu[m].bixiu*fbixiu;*/
    }
    printf("OK!\n");

}
void search(int snum)/*snum为要查询的学号*/
{
    int i;
    char ch[2];
    for(i=0;i<N;i++)
    {
        if(snum==stu[i].num)
        {
            printf("find the student,show?(y/n)\n");
            scanf("%s",ch);
            if(strcmp(ch,"Y")==0||strcmp(ch,"y")==0)
            {
                printf("number:%d,name:%s\n",stu[i].num,stu[i].name);
                printf("xuanxiu:%f,shiyan:%f,bixiu:%f\n",stu[i].xuanxiu,stu[i].shiyan,stu[i].bixiu);
                break;
            }
            else
                return;/*强制结束*/
        }
        if(i==N)
            printf("can not find the student!\n");
    }
}
int main()
{
    int NUM;
    in();
    printf("input want to search number:\n");
    scanf("%d",&NUM);
    search(NUM);
    return 0;
}
