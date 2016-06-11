/*************************************************************************
	> File Name: change.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Sat 11 Jun 2016 06:45:08 PM CST
    > Function:
 ************************************************************************/

#include<stdio.h>

int k;

int ChangeFun(int n,int *h,int Sign)
{
    if(Sign)
    {
        *h=1;
        return 3*n;
    }
    else
    {
        *h=2;
        return n/2;
    }
}

int SerachWay(int dept,int n,int m)
{
    int num;
    if(dept > k)
    {
        return 0;
    }
    int i;
    for(i=0;i<2;i++)
    {
        int tmp;
        num=ChangeFun(n,&tmp,i);
        if(num == m && SerachWay(dept+1,num,m))
        {
            printf("%d\t",tmp);
            return 1;
        }
    }
    return 0;
}

int main()
{
    return 0;
}
