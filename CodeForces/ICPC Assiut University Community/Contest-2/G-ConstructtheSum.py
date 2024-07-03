t = int(input())
while t > 0:
    t -= 1
    n, s = map(int, input().split())
    if (n * (n + 1)) // 2 < s:
        print(-1)
    else:
        total_sum = 0
        for z in range(n, 0, -1):
            if total_sum + z <= s and z != s:
                total_sum += z
                print(z, end=" ")
        print()
