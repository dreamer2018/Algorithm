/*************************************************************************
	> File Name: Triangle.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 19 Apr 2016 08:08:09 AM CST
    > Function:数字三角形问题，第二种解法，使用原数组
 ************************************************************************/
#include<stdio.h>
void main()
{
    
    int n,i,j;
    scanf("%d",&n);  
    char triangle[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%d",&triangle[i][j]);
        }
    }
    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(triangle[i+1][j]>=triangle[i+1][j+1])
            {
                triangle[i][j]+=triangle[i+1][j];
            }
            else
            {
                triangle[i][j]+=triangle[i+1][j+1];
            }
        }
    }
    printf("%d\n",triangle[0][0]);
}

