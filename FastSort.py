#!/usr/bin/env python
#!coding=utf-8
__author__ = 'zhoupan'
def Sort(list,start,end):
    #如果元素只有一个，则直接返回
    i=start
    j=end
    k=list[start]
    while(i<j):
        while(i<j and list[j] >= k):
            j-=1
        list[i]=list[j]
        while(i<j and list[i] < k):
            i+=1
        list[j]=list[i]
        list[i]=k
    return i
def FastSort(list,start,end):
    if(start<end):
        t=Sort(list,start,end)
        FastSort(list,start,t-1)
        FastSort(list,t+1,end)
if __name__ == '__main__':
    list=[5,8,3,6,4,2]
    FastSort(list,0,len(list)-1)
    print(list)