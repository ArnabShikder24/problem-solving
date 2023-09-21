m = input()
s = input()
Max = len(m) - len(s) + 1
ok = -1

for i in range(Max):
    for j in range(len(s)):
        if m[i + j] != s[j]:
            break
        if j == len(s) - 1:
            ok = i
    if ok != -1:
        break

print(ok)