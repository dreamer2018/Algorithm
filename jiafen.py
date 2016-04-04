#!/usr/bin/env python
#coding=utf-8
# File Name: jiafen.py
# Author: ZhouPan / github:dreamer2018 
# Mail: zhoupans_mail@163.com
# Blog: blog.csdn.net/it_dream_er
# Function:找出众数并打印
# Created Time: 2016年03月16日 星期三 08时52分35秒
S=[1,1,2,2,3,5,5,666,666,666,666]
max=[]
weight=[]
#max.append(S[0])
#weight.append(1)
def Count(S):
    for i in range(0,len(S),1):
        if(S[i] in max):
            weight[max.index(S[i])]+=1
        else:
            max.append(S[i])
            weight.append(1)
    return max,weight
def Max(weight):
    max=weight[0]
    for i in range(1,len(weight),1):
        if(weight[i]>max):
            max=weight[i]
    return max
def Index(weight,max_weight,max):
    rtu=[]
    for i in range(0,len(weight),1):
        if(weight[i]==max_weight):
            rtu.append(max[i])
    return rtu
def Print(res,max_weight):
    for i in range(0,len(res),1):
        print(res[i],end=" ")
    print()
    print(max_weight)
max,weight=Count(S)
max_weight=Max(weight)
res=Index(weight,max_weight,max)
Print(res,max_weight)
