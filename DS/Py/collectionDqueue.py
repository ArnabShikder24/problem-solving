from collections import deque
q = deque()
q.append('a')
q.append('b')
q.append('c')
print("Initial queue")
print(q)
print("\nElements dequeued from the queue")
print(q.popleft())
print(q)
print(q.popleft())
print(q)
print(q.popleft())
print(q)

print("\nQueue after removing elements")
print(q)
