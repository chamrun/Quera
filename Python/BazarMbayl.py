n = int(input())
p = []
q = []


for i in range(n):
    pq = input().split()
    p.append(int(pq[0]))
    q.append(int(pq[1]))


for i in range(len(p) - 1):
    for j in range(i + 1, len(p)):
        # print(str(i) + ": " + str(j))

        if p[i] <= p[j] and q[j] <= q[i]:
            p[j] = -1
            q[j] = -1

        elif p[i] >= p[j] and q[i] <= q[j]:
            p[i] = -1
            q[i] = -1

counter = 0

for i in range(n):
    # print(p[i])
    if p[i] != -1:
        counter += 1

print(counter)
