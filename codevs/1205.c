/*************************************************************************
	> File Name: 1205.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 20 Apr 2016 04:12:07 PM CST
  > Function:
 ************************************************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,n=0;
    char str[100];
    gets(str);
    //printf("%s",str);
    char temp[100][20];
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            temp[n][k]='\0';
            n++;
            k=0;
        }
        else
        {
            temp[n][k]=str[i];
            k++;
        }
    }
    temp[n][k]='\0';
    char t[100];
    for(i=0,j=n;i<j;i++,j--)
    {
        memset(t,'\0',sizeof(t));
        strcpy(t,temp[i]);
        strcpy(temp[i],temp[j]);
        strcpy(temp[j],t);
    }
    for(i=0;i<=n;i++)
    {
        printf("%s ",temp[i]);
    }
    return 0;
}
