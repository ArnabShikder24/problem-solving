n = int(input())
calc = 1
final = 1

for i in range(n):
    a = int(input())
    calc *= a

for i in range(2, calc + 1):
    while calc % i == 0:
        final *= i

print(final)
