/*************************************************************************
	> File Name: delete_number.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 10 May 2016 02:49:56 PM CST
    > Function:删数问题，即从一段数中删除几位，留下组合最小的数
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct max{
    int number;
    int sign;
};

//从一个数字中得到每一位，并存入number中
int getSize(int num)
{
    int i=0;
    while(num!=0)
    {
        num/=10;
        i++;
    }
    return i;
}
void getNumber(int * number,int num,int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
        number[i]=num%10;
        num/=10;
    }
}
int getResult(int *number,int dele,int size,int num)
{
    if(dele > size)
    {
        return -1;
    }
    else if(dele == size)
    {
        return 0;
    }
    else if(dele == 0)
    {
        return num;
    }
    int i,j;
    struct max *m=(struct max*)malloc((size-dele)*sizeof(struct max));

    for(i=0;i<size-dele;i++)
    {
        if(i==0)
        {
            m[i].number=number[0];
            m[i].sign=0;
        }
        else
        {
            m[i].sign=m[i-1].sign+1;
            m[i].number=number[m[i-1].sign+1];
        }
        for(j=m[i].sign;j<=dele+i;j++)
        {
            if(m[i].number<number[j])
            {
                m[i].number=number[i];
                m[i].sign=j;
            }
        }
    }
}
int main()
{
    int i,dele,size,num;
    scanf("%d",&num);
    scanf("%d",&dele);
    size=getSize(num);
    int *number;
    number = (int *)malloc(size*sizeof(int));
    getNumber(number,num,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",number[i]);
    }
    return 0;
}
