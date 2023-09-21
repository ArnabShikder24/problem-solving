data = list(map(int, input().split()))
n = len(data);

for k in range(n - 1):
    ptr = 0
    while ptr < n - k - 1:
        if data[ptr] > data[ptr + 1]:
            data[ptr], data[ptr + 1] = data[ptr + 1], data[ptr]
        ptr = ptr + 1

print(data)
