#include<stdio.h>
#include<stdlib.h>
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void merge(int a[],int left,int middle,int right)
{
    int swap[right-left]; //创建临时空间
    int i,j,c=0;
    i=left;
    j=middle+1;
    //对两部分进行排序合并
    while(i<j && i <= middle && j <= right)
    {
        if(a[i]< a[j])
        {
            swap[c++]=a[i++];
        }
        else
        {
            swap[c++]=a[j++];
        }
    }
    //对部分没有合并完的合并完
    while(i<=middle)
    {
        swap[c++]=a[i++];
    }
    while(j<=right)
    {
        swap[c++]=a[j++];
    }
    for(i=0;i<c;i++)
    {
        a[left+i]=swap[i];
    }
}
void mergesort(int a[],int left,int right)
{
    if(left < right)
    {
        int middle = (left+right)/2;
        mergesort(a,left,middle);
        mergesort(a,middle+1,right);
        merge(a,left,middle,right);
    }
}

int main()
{
    int a[6]={2,4,6,1,3,5};
    mergesort(a,0,5);
    print(a,6);
}
