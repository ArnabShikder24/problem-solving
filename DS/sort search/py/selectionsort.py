data = list(map(int, input().split()))
n = len(data);

for i in range(n - 1):
    min_idx = i;
    for j in range(i + 1, n):
        if data[j] < data[min_idx]:
            min_idx = j
    if min_idx != i:
        data[i], data[min_idx] = data[min_idx], data[i]

print(data)