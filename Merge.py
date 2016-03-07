#!/usr/bin/env python
#coding=utf-8
__author__ = 'zhoupan'
def MergeSort(list,start,end):
    print end
    if (end - start) == 1:
        return list
    group=[]
    for i in range(start+1,end+1,1):
        print i-1,i
        if list[i-1] > list[i]:
            group.append(i-1)
    #由于上面不能探测到最后一个元素，但是总有一组的末尾为end，故这里再加上
    group.append(end)
    for i in range(0,len(group)-2,1):
        Sort(list,start,group[i],group[i]+1,group[i+1])
    print group
def Sort(list,start_1,end_1,start_2,end_2):
    temp=[]
    i=start_1
    j=start_2
    k=0
    while(i>=end_1 or j>= end_2):
        if(list[i] <= list[j]):
            temp[k]=list[i]
            i+=1
        else:
            temp[k]=list[j]
            j+=1
        k+=1
    while(i<= end_1):
        temp[k]=list[i]
        i+=1
        k+=1
    while(j <= end_2):
        temp[k]=list[j]
        j+=1
        k+=1
if __name__ == '__main__':
    list=[2,8,3,6,9,10,4,2,1]
    MergeSort(list,0,len(list)-1)