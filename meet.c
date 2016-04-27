/*************************************************************************
	> File Name: meet.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Wed 27 Apr 2016 09:02:26 AM CST
  > Function:
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
    while(i<j)
    {
        while(i<j && a[j].var>=k)
        {
            j--;
        }
        a[i].var=a[j].var;
        while(i< j && a[i].var<k)
        {
            i++;
        }
        a[j].var=a[i].var;
        a[i].var=k;
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
    scanf("%d",&n);
    struct meet *p;
    p=(struct meet *)malloc(n*sizeof(struct meet));
    for(i=0;i<n*2;i++)
    {
        scanf("%d",&p[i].var);
        p[i].sign=i%2;
    }
    FastSort(p,0,2*n-1);
    for(i=0;i<n*2;i++)
    {
        printf("%d\t%d\n",p[i].var,p[i].sign);
    }
    int temp,max;
    temp=max=0;
    for(i=0;i<)
    return 0;
}
