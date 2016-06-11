/*************************************************************************
	> File Name: MaxClique.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 07 Jun 2016 02:51:36 PM CST
    > Function:
 ************************************************************************/

#include<stdio.h>
#include<string.h>

#define N 5  //图的顶点个数


int bestn=-1;
int bestx[N];
int SeqList[N][N];


void Init(int SeqList[][N])  //创建邻接矩阵，保存图的信息
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
 //           printf("SeqList[%d][%d]=",i+1,j+1);
            scanf("%d",&SeqList[i][j]);
        }
    }
}

//打印出邻接矩阵
void Print(int SeqList[][N])
{
    int i,j;
    printf("\n********************************\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",SeqList[i][j]);
        }
        printf("\n");
    }
    printf("********************************\n");
}

//回溯主函数
void Backtrack(int i)
{
    if(i>N) //当将所有的访问完后
    {
        int j;
        for(j=0;j<N;j++)
        {
            if(bestx[j])
            {
                printf("%d\t",j+1);
            }
        }
        printf("\n");
        return;
    }
    int ok=0;
    int j;
    for(j=0;j<N;j++)
    {
        if(bestx[j] && !SeqList[i][j]) //发现如果他与最大团里面的结点有不连通，就可以断定他一定不是最大团里面的东西
        {
            ok=1;
        }
    }
    if(!ok)
    {
        bestn++;
        bestx[i]=1;
    }
    Backtrack(i+1);
}

int main()
{
    Init(SeqList);
    Print(SeqList);
    Backtrack(0);
    return 0;
}
