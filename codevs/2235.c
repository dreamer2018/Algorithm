/*************************************************************************
	> File Name: 2235.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 20 Apr 2016 03:31:44 PM CST
    > Function:
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,d;
    float b,c;
    scanf("%d %f",&a,&b);
    c=a*b*0.1;
    d=(int)c;
    if(d%10<5)
    {
        d=d/10;
    }
    else
    {
        d=d/10+1;
    }
    d*=10;
    printf("%d",d);
    return 0;
}
