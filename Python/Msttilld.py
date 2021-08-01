n = int(input())

counter = 0

for a in range(1, int(n / 3) + 1):
    for b in range(a, int(n / 2)):
        c = n - a - b
        if c < a + b:
            counter += 1

print(counter)
