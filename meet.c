/*************************************************************************
	> File Name: meet.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 27 Apr 2016 09:02:26 AM CST
    > Function: 会场安排问题
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct meet
{
    int var;
    int sign;
};
int Sort(struct meet *a,int start,int end)
{
    int i=start;
    int j=end;
    int k=a[start].var;
    int h=a[start].sign;
    while(i<j)
    {
        while(i<j && a[j].var>=k)
        {
            j--;
        }
        a[i].var=a[j].var;
        a[i].sign=a[j].sign;
        while( i< j && a[i].var<k)
        {
            i++;
        }
        a[j].var=a[i].var;
        a[j].sign = a[i].sign;
        a[i].var=k;
        a[i].sign=h;
    }
    return i;
}
int FastSort(struct meet *a,int start,int end)
{
    if(start<end)
    {
        int i=Sort(a,start,end);
        FastSort(a,start,i);
        FastSort(a,i+1,end);
        return 0;
    }
}
int main()
{
    int i,j,n;
    int temp,max;
    scanf("%d",&n);
    struct meet *p;
    p=(struct meet *)malloc(n*sizeof(struct meet));
    for(i=0;i<n*2;i+=2)
    {
        scanf("%d %d",&p[i].var,&p[i+1].var);
        p[i].sign=i%2;
        p[i+1].sign=(i+1)%2;
    }
    FastSort(p,0,2*n-1);
    temp=max=0;
    for(i=0;i<2*n;i++)
    {
        if(temp > max)
        {
            max=temp;
        }
        if(p[i].sign==0)
        {
            temp++;
        }
        else
        {
            temp--;
        }
    }
    printf("%d\n",max);
    return 0;
}
