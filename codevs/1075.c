/*************************************************************************
	> File Name: 1075.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Mon 25 Apr 2016 12:09:17 AM CST
    > Function:去除重复的数
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[1000];
    memset(b,0,sizeof(int)*1000);
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    int count;
    for(i=0;i<1000;i++)
    {
        if(b[i]!=0)
        {
            count++;
        }
    }
    printf("%d\n",count);
    for(i=0;i<1000;i++)
    {
        if(b[i]!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
