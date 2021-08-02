n = int(input())

a = [int(x) for x in input().split()]
b = []

i = 0
while a[i] > a[i + 1]:
    i += 1

b.append(a[i])

i += 1

while i < n:
    # print(i)

    if len(b) % 2 == 1:
        while i < n and b[-1] > a[i]:
            i += 1

    if len(b) % 2 == 0:
        while i < n and b[-1] < a[i]:
            i += 1

    b.append(a[i])
    i += 1

# print(b)
print(len(b))
