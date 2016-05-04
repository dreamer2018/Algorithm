/*************************************************************************
	> File Name: 1083.c
	> Author: 
	> Mail: 
	> Created Time: Tue 03 May 2016 11:52:40 PM
    > Function:Cantor表
 ************************************************************************/

#include<stdio.h>
int getColumn(int n)  //通过n得到位于第几行
{
    int i,j;
    for(i=0;i<n;i++)
    {
        j=i*(i+1)/2;
        if(j>=n)
        {
            break;
        }
    }
    return i;
}
void main()
{
    int i,j,n,h,r1,r2;
    scanf("%d",&n);
    i=getColumn(n);
    h=i*(i-1)/2;
    j=n-h; //计算位于第c行从左往右数第几个
    if(i%2==0) //如果是奇数行
    {
        //偶数行从右往左计数
        r1=j;
        r2=i-j+1;
    }
    else //如果是偶数行
    {
        //偶数行从往右计数
        r1=i-j+1;
        r2=j;
    }
    printf("%d/%d\n",r1,r2);
}
