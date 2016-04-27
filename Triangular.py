#!/usr/bin/env python
#coding=utf-8
row=input()
def getData(row):
    data=[]
    for i in range(0,row):
        data.append([])
        col = raw_input()
        raw_data=col.split(' ')
        for j in range(0,i+1):
            data[i].append(int(raw_data[j]))
    return data
def CountMax(data,row):
    '方法一，使用一个二维数组保存，从上往下进行循环计算'
    #初始化一个row*row的数组
    mtu=[]
    for i in range(0,row):
        mtu.append([])
        for j in range(0,row):
            mtu[i].append(-1)
    mtu[0][0]=data[0][0]
    for i in range(1,row):
        for j in range(0,i+1):
            a=0
            b=0
            if(mtu[i-1][j] != -1):
                a=mtu[i-1][j]+data[i][j]
            if(mtu[i-1][j-1] != -1):
                b=mtu[i-1][j-1] +data[i][j]
            if(a >= b):
                mtu[i][j]=a
            else:
                mtu[i][j]=b
    return max(mtu[row-1])
def CountMax2(data,row):
    '使用一维数组保存，自底向上在原数组上操作'
    for i  
data=getData(row)
max=CountMax(data,row)
print max