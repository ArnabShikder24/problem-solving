data = list(map(int, input().split()))
n = len(data);

for i in range(1,n):
    temp = data[i]
    ptr = i - 1

    while ptr >= 0 and temp < data[ptr]:
        data[ptr + 1] = data[ptr]
        ptr = ptr - 1

    data[ptr + 1] = temp

print(data)