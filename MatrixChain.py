#/usr/bin/env python
#coding=utf-8
__author__='zhoupan'
def  MatrixChain(n,p):
    m=[]
    s=[]
    i=0
    j=0
    #创建一个n*n的矩阵,并全部初始化为0
    for i in range(0,n+1):
        m.append([])
        s.append([])
        for j in range(0,n+1):
            m[i].append(0)
            s[i].append(0)
    print(m,s)

    for r in range(2,n+1):
        for i in range(1,n-r+2):
            j=i+r-1
            m[i][j] = m[i+1][j]+p[i-1]*p[i]*p[j]
            s[i][j]=i;
            for k in range(i+1,k<j):
                t=m[i][k]+m[k+1][j]+p[j-1]*p[k]*p[j]
                if(t<m[i][j]):
                    m[i][j]=t
                    s[i][j]=k
    return m,s

if __name__ == '__main__':
    MatrixChain(5,[30,35,15,5,10,20,25])
