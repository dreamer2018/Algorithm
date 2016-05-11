/*************************************************************************
	> File Name: delete_number.c
	> Author: ZhouPan / github: dreamer2018
	> Mail: zhoupans_mail@163.com
	> Created Time: Tue 10 May 2016 02:49:56 PM CST
    > Function:删数问题，即从一段数中删除几位，留下组合最小的数
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


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

int delMember(int *number,int size,int index)
{
    if(number == NULL)
    {
        return 0;
    }
    int i;
    for(i=index;i<size ;i++)
    {
        number[i]=number[i+1];
    }
    return size-1;
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
    int i,j,temp=size,sign;
    for(i=0;i<dele;i++)
    {
        sign=0;
        //找出非递增的，排除前面删除的
        for(j=0;j<temp;j++)
        {
            if(number[j]>number[j+1])
            {
                temp=delMember(number,temp,j);
                sign=1;
                break;
            }
        }
        if(!sign)
        {
            temp=delMember(number,temp,j-1);
        }
    }
    return temp;
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
    size=getResult(number,dele,size,num);
    printf("\n");
    num=0;
    for(i=0;i<size;i++)
    {
        num+=number[i]*pow(10,size-i-1);
    }
    printf("%d\n",num);
}
