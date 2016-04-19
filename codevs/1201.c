/*************************************************************************
	> File Name: 1201.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 19 Apr 2016 11:57:12 PM CST
    > Function:最大数和最小数
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num,max,min;
    scanf("%d",&num);
    int *list;
    list=(int *)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
    {
        scanf("%d",&list[i]);
    }
    max=min=list[0];
    for(i=1;i<num;i++)
    {
        if(list[i]>max)
        {
            max=list[i];
        }
        else if(list[i]<min)
        {
            min=list[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}

