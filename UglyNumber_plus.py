#!/usr/bin/env python
#coding=utf-8
# FileName:UglyNumber_plus.py
# Author: ZhouPan / github:dreamer2018
# Blog: blog.csdn.net/it_dream_er
# Function:求第n个丑数，丑数即只能被2，3，5整除的数
# Create Time: 4/6/16 8:11 AM
class Solution:
    """
    @param {int} n an integer.
    @return {int} the nth prime number as description.
    """
    # write your code here
    def divide(self, i, j):
        while (i <= j):
            if (j%i != 0):
                return j
            j = j // i
        return 0
    def isUgly(self, num):
        # Write your code here
        if (num <= 0):
            return False
        elif (num == 1):
            return True
        j = Solution.divide(self,5,num)
        if (j == 0):
            return True
        j = Solution.divide(self,3,j)
        if (j == 0):
            return True
        j = Solution.divide(self,2,j)
        if (j == 0):
            return True
        return False
    def nthUglyNumber(self, n):
        # write your code here
        if(n<=0):
            return 0
        j=-1
        i=0
        while(i<n):
            j+=1
            if(Solution.isUgly(self,j)):
                i+=1
        return j

print("result",Solution.nthUglyNumber(Solution,599))