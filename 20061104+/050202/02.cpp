#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 4
#define COLS 5
#define NUM  ROWS*COLS
#define Max_Height 200
#define Min_Height 120


//生成随机身高
void make_height(int stu_height[ROWS][COLS],int rows,int cols)
{
	int r,c;
	for (r=0;r<rows;r++)
		for (c=0;c<cols;c++)
			stu_height[r][c]=rand()%40+150;
}

void display(int data[ROWS][COLS],int rows,int cols)
{
	int r,c;
	for( r=0;r<rows;r++)
	{
		for ( c=0;c<cols;c++)
		{
			printf("%d\t",data[r][c]);
		}
		printf("\n");
	}
}


//将2维变为1维，并桶排序
void To1_Sort(int data[ROWS][COLS],int rows,int cols, int result[],int n)
{
	int r,c,i,j,k=0;
	int h_s[Max_Height+1]={0};

	for (r=0;r<rows;r++)
		for (c=0;c<cols;c++)
			h_s[ data[r][c] ]++;
	
	for ( i=Min_Height;i<=Max_Height ;i++)
		for (j=0;j<h_s[i];j++)
		{
			result[k]=i;
			//printf("%d\n",result[k]);
			k++;
		}
}


void To2_sort(int sort[],int result[ROWS][COLS],int rows,int cols,int num)
{
	int i=0,r,c;
	
	for ( r=0;r<rows;r++)
	{
		for ( c=0;c<cols/2;c++)
		{
			result[r][c] = sort[i++];
			result[r][cols-c-1]=sort[i++];
		}
		if (cols % 2 ==1)
			result[r][c]= sort[i++];
		printf("%d\n",sort[i]);
	}

}



int main()
{
	int stu_h_data[ROWS][COLS]={0};
	int sort[ROWS*COLS]={0};
	int result[ROWS][COLS]={0};
	

	make_height(stu_h_data,ROWS,COLS);
	display(stu_h_data,ROWS,COLS);
	
	To1_Sort(stu_h_data,ROWS,COLS,sort,ROWS*COLS);
	To2_sort(sort,result,ROWS,COLS,NUM);
	display(result,ROWS,COLS);

	return 0;
}

