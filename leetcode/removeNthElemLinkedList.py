# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        ancestor = head
        pointer = head.next
        for _ in range(n-1):
          pointer = pointer.next

        if pointer is None:
            return head.next
        
        while pointer.next:
            ancestor = ancestor.next
            pointer = pointer.next
        ancestor.next = ancestor.next.next
        return head