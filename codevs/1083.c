/*************************************************************************
	> File Name: 1083.c
	> Author: 
	> Mail: 
	> Created Time: Tue 03 May 2016 11:52:40 PM
 ************************************************************************/

#include<stdio.h>
int getColumn(int n)  //通过n得到位于第几行
{
    int i,j;
    for(i=0;i<n;i++)
    {
        j=i*(i+1)/2;
        if(j>n)
        {
            break;
        }
    }
    return i;
}
void main()
{
    int i,j,n,c,h;
    scanf("%d",&n);
    c=getColumn(n);
    h=c*(c-1)/2; 
    i=n-h; //计算位于第c行第几个
    if(c%2==0) //如果是偶数行
    {
        
    }
    else //如果是奇数行
    {

    }
}
