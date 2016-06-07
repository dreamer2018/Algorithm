/*************************************************************************
	> File Name: MaxClique.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 07 Jun 2016 02:51:36 PM CST
    > Function:
 ************************************************************************/

#include<stdio.h>
#define N 5  //图的顶点个数

void Init(int SeqList[][N])  //创建邻接矩阵，保存图的信息
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("SeqList[%d][%d]=",i+1,j+1);
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
void Backtrack(int i,int bestx[],int x[],int bestn,int cn,int SeqList[][N])
{
    if(i>N) //当到达叶子结点
    {
        int j;
        for(j=0;j<N;j++)
        {
            bestx[j]=x[j];
        }
        bestn=cn;
        return;
    }
    int OK=1,j;
    for(j=0;j<i;j++)
    {
        if(x[j] && SeqList[i][j] == 0) //如果i,j不相连
        {
            OK=0;
            break;
        }
    }
    if(OK) //进入左子树
    {
        x[i]=1;
        cn++;
        Backtrack(i+1,bestx,x,bestn,cn,SeqList);
        x[i]=0;
        cn--;
    }
    if(cn+N-i >= bestn) //进入右子树
    {
        x[i]=0;
        Backtrack(i+1,bestx,x,bestn,cn,SeqList);
    }
}

int main()
{
    int SeqList[N][N];
    int x[N];
    int bestx[N];
    int bestn=0;
    int cn=0;
    Init(SeqList);
    Print(SeqList);
    Backtrack(0,bestx,x,bestn,cn,SeqList);
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d\t",x[i]);
    }
    return 0;
}
