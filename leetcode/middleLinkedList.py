# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
  def middleNode(self, head):
    pointer = head
    length = 0
    middle = 0
    while pointer:
      pointer = pointer.next
      length += 1

    middle = (length // 2) + 1
    pointer = head
    
    for _ in range(middle-1):
      pointer = pointer.next
    return pointer