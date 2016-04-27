/*************************************************************************
	> File Name: JudgeFloat.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 20 Apr 2016 03:14:13 PM CST
    > Function:判断两个浮点数是否相等
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b;
    scanf("%lf %lf",&a,&b);
    if(fabs(a-b)<0.00000001)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
