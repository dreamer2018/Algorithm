/*************************************************************************
	> File Name: LongestList.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 19 Apr 2016 12:25:37 PM CST
  > Function:最长公共子序列
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int Max(int *list,int n)
{
    int i,max;
    max=list[0];
    for(i=1;i<n;i++)
    {
        if(list[i]>max)
        {
            max=list[i];
        }
    }
    return max;
}
int countLongestList(char *str,int n)
{
    int i,j;
    int temp[n];
    for(i=0;i<n;i++)
    {
        temp[i]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(str[i]>str[j] && temp[i]<temp[j]+1)
            {
                temp[i]=temp[j]+1;
            }
        }
    }
    return Max(temp,n);
}
void main()
{
    char str[100];
    scanf("%s",str);
    int result=countLongestList(str,strlen(str));
    printf("result=%d\n",result);
}
