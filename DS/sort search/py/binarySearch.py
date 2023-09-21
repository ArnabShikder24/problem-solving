import math

arr = list(map(int, input().split()))
target = int(input())
arr = sorted(arr)

left = 0
right = len(arr) - 1

ok = -1

while left <= right:
    mid = math.ceil((left + right) / 2)

    if arr[mid] == target:
        ok = mid
        break
    elif arr[mid] < target:
        left = mid + 1
    else: 
        right = mid - 1

print(ok + 1)
