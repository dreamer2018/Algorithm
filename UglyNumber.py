#!/usr/bin/env python
#coding=utf-8
# FileName:UglyNumber.py
# Author: zhoupan /github:dreamer2018
# Blog: blog.csdn.net/it_dream_er
# Function:Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
# Create Time: 4/5/16 5:55 PM

class Solution:
    # @param {int} num an integer
    # @return {boolean} true if num is an ugly number or false
    def divide(self,i,j):
        while(i<=j):
            if(j%i !=0 ):
                return j
            j = j//i
        return 0
    def isUgly(self,num):
        # Write your code here
        if(num <= 0):
            return False
        elif ( num == 1):
            return True
        j=Solution.divide(self,5,num)
        if(j==0):
            return True
        j=Solution.divide(self,3,j)
        if(j==0):
            return True
        j=Solution.divide(self,2,j)
        if(j==0):
            return True
        return False
print(Solution.isUgly(Solution,16))
