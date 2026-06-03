class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def reverse(head):
    prev = None
    current = head

    while current:
        nxt = current.next
        current.next = prev
        prev = current
        current = nxt

    return prev