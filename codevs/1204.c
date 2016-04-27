/*************************************************************************
	> File Name: 1204.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 20 Apr 2016 03:43:34 PM CST
    > Function:寻找字串的位置
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    if(strlen(str1) < strlen(str2))
    {
        printf("-1");
        return -1;
    }
    int i,j=0,k=-1;
    for(i=0;i<strlen(str1) && j<strlen(str2);i++)
    {
        //如果a串中有和b串地一个开始相等，则就开始计数
        if(str1[i]==str2[j])
        {
            //如果k是-1则就表明匹配开始，否则就表示是中间匹配
            if(k==-1)
            {
                k=i;
            }
            j++;
        }
        else
        {
            //如果k不等于-1,则就表明匹配了一部分然后终止的，则应该回溯一下，重新开始匹配
            if(k!=-1)
            {
                i--;
            }
            //给k和j都赋上初始值
            k=-1;
            j=0;
        }
    }
    printf("%d",k+1);
    return 0;
}
