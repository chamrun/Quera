n = int(input())

h = [int(x) for x in input().split()]

i = 0
while i < n:
    start = i
    i += 1

    while h[i] < h[start]:
        i += 1

        if n - 1 < i:
            break

    end = i

