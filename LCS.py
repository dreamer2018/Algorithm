#/usr/bin/env python
#coding=utf-8
__author__='zhoupan'

def LCSLength(m,n,x,y):
    c=[]
    b=[]
    #初始化两个m*n的二维列表，代替c语言中的二维数组
    for i in range(0,m+1):
        c.append([])
        b.append([])
        for j in range(0,n+1):
            c[i].append(0)
            b[i].append(0)
    for i in range(1,m+1):
        for j in range(1,n+1):
            if(x[i-1] == y[j-1]):
                c[i][j]=c[i-1][j-1]+1
                b[i][j]=1
            elif(c[i-1][j]>=c[i][j-1]):
                c[i][j]=c[i-1][j]
                b[i][j]=2
            else:
                c[i][j]=c[i][j-1]
                b[i][j]=3
    return c,b

def LCS(i,j,x,b):
    if(i==0 or j== 0):
        return -1
    if(b[i][j]==1):
        LCS(i-1,j-1,x,b)
        print(x[i-1],end="")
    elif(b[i][j]==2):
        LCS(i-1,j,x,b)
    else:
        LCS(i,j-1,x,b)

if __name__ == '__main__':
    x = 'aboutaa'
    y = 'staticaa'
    c,b = LCSLength(len(x),len(y),x,y)
    LCS(len(x),len(y),x,b)