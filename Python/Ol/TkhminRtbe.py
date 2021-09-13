xn = input().split()
n = int(xn[1])

k = [int(x) for x in input().split()]

last_rank = 0
for i in range(len(k), n):
    last_rank += 1

    while k.__contains__(last_rank):
        last_rank += 1
    k.append(last_rank)

print(last_rank)
