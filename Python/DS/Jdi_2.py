n = int(input())

a = [int(x) for x in input().split()]

last_b = a[0]
size_b = 1

i = 0

while i < n:
    while size_b % 2 == 1:
        if last_b < a[i]:
            size_b += 1
            last_b = a[i]

        else:
            last_b = a[i]
            i += 1

            if i == n:
                print(size_b)
                exit(0)

    while size_b % 2 == 0:
        if last_b > a[i]:
            size_b += 1
            last_b = a[i]

        else:
            last_b = a[i]
            i += 1

            if i == n:
                print(size_b)
                exit(0)

    i += 1

print(size_b)
