#!/usr/bin/env python
#coding=utf-8
# FileName:Linklist.py
# Author: ZhouPan / github:dreamer2018
# Blog: blog.csdn.net/it_dream_er
# Function:
# Create Time: 4/6/16 8:56 AM

#Definition of ListNode
class ListNode(object):

    def __init__(self, val, next=None):
        self.val = val
        self.next = next

class Solution:
    """
    @param head: The first node of linked list.
    @return: The head of linked list.
    """
    def insertionSortList(self, head):
        # write your code here
        p=q=head
        while(p != None):
            c=m=p
            while(q!= None):
                if(m.value > q.value):
                    m=q
                q=q.next
            if(c.value != m.value):
                c.value,m.value = m.value,c.value
            p=p.next
            q=p