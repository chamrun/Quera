n = int(input())

answers = 0

for a in range(1, int(n / 3) + 1):
    for b in range(a, min(int(n / 2) + 1, n - a)):
        c = n - a - b
        if b <= c < a + b:
            answers += 1

print(answers)
