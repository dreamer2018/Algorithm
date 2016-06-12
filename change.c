/*************************************************************************
	> File Name: change.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Sat 11 Jun 2016 06:45:08 PM CST
    > Function:
 ************************************************************************/

#include<stdio.h>
#define N 100

int count=0;  //统计需要变换的数量
int x[N];   //记录变换的过程

int ChangeFun(int n,int *h,int Sign)  //根据Sign的值，变换计算方法，h用于记录使用了那种方法
{
    if(!Sign)
    {
        *h=0;
        return 3*n;
    }
    else
    {
        *h=1;
        return n/2;
    }
}

int SerachWay(int dept,int k,int n,int m)
{
    int num;
    if(dept > k) //当
    {
        return 0;
    }
    int i;
    for(i=0;i<2;i++)
    {
        int tmp;
        num=ChangeFun(n,&tmp,i);
        if(num == m || SerachWay(dept+1,k,num,m))
        {
            count++;
            x[count-1]=tmp;
            return 1;
        }
    }
    return 0;
}
void Print()
{
    int i;
    printf("%d\n",count);
    for(i=0;i<count;i++)
    {
        printf("%c",x[i]? 'g':'f');
    }
    printf("\n");
}

int main()
{
    int m,n;
    int k=1;
    scanf("%d %d",&n,&m);
    while(!SerachWay(1,k,n,m))
    {
        k++;
    }
    Print();
    return 0;
}
