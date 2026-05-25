"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""
def copyandinsert(head):
    temp = head
    while temp:
        nextelem = temp.next
        copy = Node(temp.val)
        copy.next = nextelem
        temp.next = copy
        temp = nextelem

def connectrandom(head):
    temp = head
    while temp:
        copynode = temp.next
        if temp.random:
            copynode.random = temp.random.next
        else:
            copynode.random = None

        temp = temp.next.next

def dummynode(head):
    temp = head
    dummy = Node(-1)
    res = dummy
    while temp:
        res.next = temp.next
        res = res.next

        temp.next = temp.next.next
        temp = temp.next
    
    return dummy.next
class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        if not head:
            return None
        copyandinsert(head)
        connectrandom(head)
        return dummynode(head)

