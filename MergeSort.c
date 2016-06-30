#include<stdio.h>
void merge(int a[],int right,int left)
{
    int swap[left-right];
    int i,j;
    i=right;
    j=right;
    while(i<j)
    {

    }
}
void mergesort(int a[],int left,int right)
{
    if(left < right)
    {
        int middle = (right+left)/2;
        mergesort(a,left,middle);
        mergesort(a,middle,right);
        merge();
    }
}
void main()
{
}
