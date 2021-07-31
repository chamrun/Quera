n = int(input())

answers = 0

for a in range(1, int(n / 3) + 1):
    answers += int((n - 3 * a) / 2) - max(0, int(n / 2) - 2 * a + 1) + 1

    if 7 + pow(10, 9) < answers:
        answers -= 7 + pow(10, 9)

print(answers)
