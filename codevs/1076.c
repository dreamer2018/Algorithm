/*************************************************************************
	> File Name: 1076.c
	> Author: ZhouPan / github: dreamer2018 
	> Mail: zhoupans_mail@163.com
	> Created Time: Mon 25 Apr 2016 12:22:44 AM CST
  > Function:
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int Sort(int *a,int start,int end)
{
    int i=start;
    int j=end;
    int k=a[start];
    while(i<j)
    {
        while(i<j && a[j]>=k)
        {
            j--;
        }
        a[i]=a[j];
        while(i< j && a[i]<k)
        {
            i++;
        }
        a[j]=a[i];
        a[i]=k;
    }
    return i;
}
int FastSort(int *a,int start,int end)
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
    int n,i;
    scanf("%d",&n);
    int *a;
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    FastSort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
