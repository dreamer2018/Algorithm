/*************************************************************************
	> File Name: change.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Sat 11 Jun 2016 04:49:54 PM CST
    > Function:
 ************************************************************************/
#include<stdio.h>
#include <iostream>

using namespace std;

bool SearchWay(int Dept, const int n,const int m);
int k = 1;

int main(int argc, char* argv[])
{
    int inData,outData,Dept = 1;
    while(true)
    {
        scanf("%d%d",&inData,&outData);
        if(inData == 0 && outData == 0)
        {
            break;
        }
        k = 1;
        while(!SearchWay(1,inData,outData))
        {
            k++;
        }
        cout << k<< endl;
    }
    return 0;
}

int ChangeFun(const int n,int *h,int C)
{
    int rtu;
    if(C == 0)
    {
        rtu=3*n;
        *h=1;
    }
    else
    {
        rtu=n/2;
        *h=2;
    }
    return rtu;
}
bool SearchWay(int Dept, const int n,const int m)
{
    int num;
    if(Dept > k)
    {
        return false;
    }
    for(int i = 0; i < 2; i++)
    {
        int h;
        num = ChangeFun(n,&h,i);
        if(num  == m || SearchWay(Dept + 1,num,m))
        {
            printf("%d\n",h);
            return true;
        }
    }
    return false;
}
