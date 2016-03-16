#!/usr/bin/env python
#coding=utf-8
__author__ = 'zhoupan'
def MergeSort(list,start,end):
    #如果列表里只有一个数据，则直接返回
    if (end - start) == 1:
        return list
    #创建一个列表用于存放分组信息
    group=[]
    #分组
    for i in range(start+1,end+1,1):
        if list[i-1] > list[i]:
            group.append(i-1)
    #由于上面不能探测到最后一个元素，但是总有一组的末尾为end，故这里再加上
    group.append(end)
    #将各个分组合并
    for i in range(0,len(group)-1,1):
        s1=start
        e1=group[i]
        s2=group[i]+1
        e2=group[i+1]
        #将分组排序
        Sort(list,start,group[i],group[i]+1,group[i+1])
def Sort(list,start_1,end_1,start_2,end_2):
    #创建一个列表用于临时保存排好序的部分
    temp=[]
    i=start_1
    j=start_2
    k=0
    #排序
    while(i <= end_1 and j <= end_2):
        if(list[i] <= list[j]):
            temp.append(list[i])
            i+=1
        else:
            temp.append(list[j])
            j+=1
        k+=1
    #没有排完的在后面继续
    while(i <= end_1):
        temp.append(list[i])
        i+=1
        k+=1

    while(j <= end_2):
        temp.append(list[j])
        j+=1
        k+=1
    #将排好的复制回list
    for i in range(0,len(temp),1):
        list[i]=temp[i]
if __name__ == '__main__':
    list=[2,8,3,6,9,10,4,2,1,2,24,7,32,8,0]
    MergeSort(list,0,len(list)-1)
    print list
