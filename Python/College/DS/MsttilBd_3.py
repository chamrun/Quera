# ToDo

n = int(input())

bound = int((int(n / 2) + 1) / 2)

answer = (bound * (bound + 1)) - (int(n / 2) * bound) + int(n / 3) - bound
print(str(bound) + "*" + str(bound + 1) + "-" + str(int(n/2)) + "*" + str(bound) + "+" + str(int(n / 3)) + "-" + str(bound))
print(answer)

k = int(int(n / 3) / 2)
answer += answer + (n + 1) * k - 3 * k * (k + 1)
print(answer)

if int(n / 3) % 2 == 1:
    answer += int((n - 3 * (2 * k + 1)) / 2)

print(answer)

answer %= 7 + pow(10, 9)

print(answer)
