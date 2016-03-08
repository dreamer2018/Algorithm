#!/usr/bin/env python
#coding=utf-8
__author__ = 'zhoupan'
def MergeSort(list,start,end):
    if (end - start) == 1:
        return list
    group=[]
    for i in range(start+1,end+1,1):
        if list[i-1] > list[i]:
            group.append(i-1)
    #由于上面不能探测到最后一个元素，但是总有一组的末尾为end，故这里再加上
    group.append(end)
    for i in range(0,len(group)-1,1):
        s1=start
        e1=group[i]
        s2=group[i]+1
        e2=group[i+1]
        Sort(list,start,group[i],group[i]+1,group[i+1])
    print group
def Sort(list,start_1,end_1,start_2,end_2):
    temp=[]
    i=start_1
    j=start_2
    k=0
    print start_1,end_1,start_2,end_2
    while(i <= end_1 and j <= end_2):
        print i,j
        if(list[i] <= list[j]):
            print i
            temp.append(list[i])
            i+=1
        else:
            temp.append(list[j])
            j+=1
        k+=1
    print 'test',i,j,end_1,end_2
    while(i <= end_1):
        print 'i=',i
        temp.append(list[i])
        print 'temp',temp
        i+=1
        k+=1

    while(j <= end_2):
        temp.append(list[j])
        print 'j',j
        j+=1
        k+=1
    print temp
    for i in range(0,len(temp),1):
        list[i]=temp[i]
    print list
if __name__ == '__main__':
    list=[2,8,3,6,9,10,4,2,1,2]
    MergeSort(list,0,len(list)-1)
    print list