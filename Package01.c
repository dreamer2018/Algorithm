#include<stdio.h>

#define N 3  //物品数量
#define C 5  //背包重量
int V[C+1];  //背包总价值

int max(int x,int y)
{
    return x>y?x:y;
}

int maxinput(int w[],int v[])
{
    int i,j;
    for(j=0;j<=C;j++)
    {
        V[j]=0;
    }
    for(i=0;i<=N;i++)
    {
        for(j=C;j>=w[i];j--)
        {
            V[j]=max(V[j],V[j-w[i]]+v[i]);
        }
    }
    return(V[C]);
}
int main()
{
    int w[N]={2,1,1};  //物品质量
    int v[N]={2,3,4};  //物品价值
    printf("%d",maxinput(w,v));
}
