/*************************************************************************
	> File Name: LCS.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 01 Jun 2016 09:21:26 AM CST
    > Function:
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct str{  //保存公共的字符序列
    char c;  //公共字符
    int i;   //c在第一个字符里的位置
    int j;   //c在第二个字符里的位置
};
int Max(int *m,int len) //从一维数组里取出最大的值
{
    int i,max=m[0];
    for(i=1; i<len ;i++)
    {
        if(m[i]>max)
        {
            max=m[i];
        }
    }
    return max;
}

int LCS(char *str1,char *str2)
{
    int len1=strlen(str1);
    int len2=strlen(str2);
    int m[len1+1][len2+1];
    struct str n[len1];
    int i,j;
    for(i=0;i<len1;i++) //对结构体初始化
    {
        n[i].c='\0';
        n[i].i=-1;
        n[i].j=-1;
    }
    for(i=0;i<=len1;i++)   //将数组全部置零
    {
        for(j=0;j<=len2;j++)
        {
            m[i][j]=0;
        }
    }
    for(i=1;i<=len1;i++)
    {
        for(j=1;j<=len2;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                int k,sign=0;
                m[i][j]=m[i-1][j-1]+1;
                for(k=0;k<len1;k++) //便历整个结构题数组
                {
                    if(n[k].c=='\0') //遇到\0则就结束
                    {
                        break;
                    }
                    if(n[k].i >= i-1 || n[k].j >= j-1) //判断字符是否在前面已经输出，已输出的话，就不再重复
                    {
                        sign=1;
                    }
                }

                if(!sign) //如果次子符并未输出过，则保存到结构体中，并输出
                {
                    n[k].c=str1[i-1];
                    n[k].i=i-1;
                    n[k].j=j-1;
                    printf("%c",n[k].c);
                }
            }
            else if(m[i-1][j] >= m[i][j-1])
            {
                m[i][j]=m[i-1][j];
            }
            else
            {
                m[i][j]=m[i][j-1];
            }
        }
    }
    return Max(m[len1],len1+1);
}
int main()
{
    char str1[]="intrt";
    char str2[]="iintt";
    LCS(str1,str2);
    printf("\n");
    return 0;
}
