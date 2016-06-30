#include<stdio.h>
int sort(int a[],int start,int end)
{
    int i,j,k=a[start];
    i=start;
    j=end;
    while(i<j)
    {
        while(i<j && a[j] >= k)
        {
            j-=1;
        }
        a[i]=a[j];
        while(i<j && a[i] <= k)
        {
            i+=1;
        }
        a[j]=a[i];
        a[i]=k;
    }
    return i;
}
void fastsort(int a[],int start,int end)
{
    if(start<end)
    {
        int middle = sort(a,start,end);
        fastsort(a,start,middle-1);
        fastsort(a,middle+1,end);
    }
}
int main()
{
    int i,a[]={2,4,6,3,1,5};
    fastsort(a,0,5);
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
