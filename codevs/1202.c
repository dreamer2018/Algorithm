/*************************************************************************
	> File Name: 1202.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 20 Apr 2016 12:26:09 AM CST
    > Function:一段数据求和
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,sum=0;
    int *list;
    scanf("%d",&n);
    list=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=list[i];
    }
    printf("%d\n",sum);
    return 0;
}
