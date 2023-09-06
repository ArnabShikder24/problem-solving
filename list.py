class Node:
    def __init__(self, value):
        self.data = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def insetAtHead(self, value):
        newNode = Node(value)
        newNode.next = self.head
        self.head = newNode

    def insertAtTail(self, value):
        newNode = Node(value)

        if self.head is None:
            self.head = newNode
            return
        
        current = self.head
        while current.next:
            current = current.next
        current.next = newNode

    def insertAtAnyPos(self, pos, value):
        newNode = Node(value)

        if self.head == None:
            self.head = newNode
            return
        
        if pos == 1:
            newNode.next = self.head
            self.head = newNode
            return
        
        current = self.head
        for i in range(pos - 2):
            current = current.next
        newNode.next = current.next
        current.next = newNode
    
    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")



list = LinkedList()
print("Option 1: Insert at Tail")
print("Option 2: Insert at Head")
print("Option 3: Insert at Any Position")
while True:
    op = int(input())
    if op == 1:
        print("Please enter a value:", end=" ")
        value = input()
        list.insertAtTail(value)
    elif op == 2:
        print("Please enter a value:", end=" ")
        value = input()
        list.insetAtHead(value)
    elif op == 3:
        print("Please enter a value:", end=" ")
        pos = input()
        value = input()
        list.insertAtAnyPos(pos, value)
    else:
        print("The list: ", end=" ")
        list.display()



