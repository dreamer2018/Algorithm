/*************************************************************************
	> File Name: P110.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 25 May 2016 07:46:34 AM
    > Function:多处最优服务次序问题
 ************************************************************************/

#include<stdio.h>
#include<malloc.h>
#include<string.h>
int Sort(int s[],int start,int end)
{
    int i=start;
    int j=end;
    int k=s[start];
    while(i<j)
    {
        while(i<j && s[j] >=k )
        {
            j--;
        }
        s[i]=s[j];
        while(i<j && s[i] < k)
        {
            i++;
        }
        s[j]=s[i];
        s[i]=k;
    }
    return i;
}
void FastSort(int s[],int start,int end)
{
    if(start<end)
    {
        int t=Sort(s,start,end);
        FastSort(s,start,t-1);
        FastSort(s,t+1,end);
    }
}
int getMinIndex(int s[],int len)
{
    int i,r,min;
    r=0;
    min=s[0];
    for(i=1;i<len;i++)
    {
        if(s[i]<min)
        {
            r=i;
            min=s[i];
        }
    }
    return r;
}
int main()
{
    int i,n,*s,m,*service;
    int Max=0;
    scanf("%d %d",&n,&m);
    s=(int *)malloc(n*sizeof(int));
    service=(int *)malloc(m*sizeof(int));
    //初始化为0
    memset(service,0,m*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    //对序列进行快排
    FastSort(s,0,n-1);
    //循环分配任务
    for(i=0;i<n;i++)
    {
        int x=getMinIndex(service,m);
        service[x]+=s[i];
        Max+=service[x];
    }
    //求平均值
    printf("%d\n",Max/n);
    return 0;
}
