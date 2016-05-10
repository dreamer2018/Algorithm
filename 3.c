/*************************************************************************
	> File Name: 3.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 03 May 2016 09:29:25 PM CST
  > Function:
 ************************************************************************/

#include<stdio.h>

void main()
{
    int a[5][5]={{7},{3,8},{8,1,0},{2,7,4,4},{4,5,2,6,5}};
    //int a[3][3]={{1},{1,2},{1,2,3}};
    int i,j,k,s=0;
    for(i=4;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(a[i][j]>a[i][j+1])
            {
                a[i-1][j]+=a[i][j];
            }
            else
            {
                a[i-1][j]+=a[i][j+1];
            }
        }
    }
    printf("%d\n",a[0][0]);
}
