n = int(input())

h = [int(x) for x in input().split()]

result = 0

i = 0

while i < n:
    start = i

    i += 1
    if i >= n - 1:
        break

    # print("before loop: " + str(i))
    while h[i] < h[start]:

        i += 1
        # print(i)
        if i >= n - 1:
            max_i = start + 1

            for j in range(start + 1, n):
                if h[max_i] < h[j]:
                    max_i = j

            for j in range(start, max_i):
                to_add = h[max_i] - h[j]
                if 0 < to_add:
                    result += to_add

            print(result)

            exit(0)
        # print("b\n")

    end = i

    min_h = min(h[start], h[end])
    # print("min(" + str(h[start]) + "," + str(h[end]) + ")")

    for j in range(start + 1, end):
        to_add = min_h - h[j]
        if 0 < to_add:
            result += to_add
        # print("+= " + str(min_h) + " - " + str(h[j]))

    # print("min(" + str(h[start]) + "," + str(h[end]) + ") -> " + str(result))

# print("\nres: ")
print(result)
