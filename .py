# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

# Solution 1
# Recursive method

class Solution_Recursive:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if not l1  or  (l2 and l1.val > l2.val) :  
            # if l1 doesnt exist but l2, we put l2 first
            # no need change a none type object l2 with l1 containing some value
            # if l2 exists as a larger value we swap
            l1, l2 = l2, l1
        if l1:
            l1.next = self.mergeTwoLists(l1.next, l2) 
            # recursively keeps on add to the tail
        return l1 # reaches end of linked list and returns
        
# Solution 2
# Iterative method

class Solution_Iterative:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        head = curr = ListNode(0)
        # 0 -> None both head and curr
        while l1 and l2 :
            if l1.val < l2.val :
                # move along l1 if l1 is smaller since 
                # we want to grab smaller numbers first
                curr.next = l1
                l1 = l1.next
            else :
                # l2 is the smaller else
                curr.next = l2
                l2 = l2.next
            # move curr pointer to allow comparison and 
            # help the smaller valued linked list's pointer 
            # to move ahead so that it is not compared again  
            curr = curr.next  
        curr.next = l1 or l2 # connect the remaining uncompared 
        # list to the end of  curr's pointer
        return head.next # return all elements except the 0 default
