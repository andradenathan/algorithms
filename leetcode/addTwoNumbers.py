from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        eleml1 = eleml2 = ""

        while l1.next:
            if str(l1.val).__contains__('0'): continue
            eleml1 += str(l1.val)
            l1 = l1.next

        eleml1 += str(l1.val)
        
        while l2.next:
            if str(l2.val).__contains__('0'): continue
            eleml2 += str(l2.val)
            l2 = l2.next
        
        eleml2 += str(l2.val)
        
        result = int(eleml1[::-1]) + int(eleml2[::-1])
        result = str(result)[::-1]

        final_list = ListNode(int(result[0]))
        pointer = final_list

        for index in range(1, len(result)):
            pointer.next = ListNode(int(result[index]))
            pointer = pointer.next
            
        return final_list


        
l1 = ListNode(2, ListNode(4, ListNode(9)))
l2 = ListNode(5, ListNode(6, ListNode(4, ListNode(9))))

final_list = Solution().addTwoNumbers(l1, l2) 

while final_list.next:
    print(f'{final_list.val} -> ', end='')
    final_list = final_list.next
print(final_list.val)

