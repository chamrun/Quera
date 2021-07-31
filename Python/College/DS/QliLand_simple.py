nq = input().split()
n_people = int(nq[0])
n_days = int(nq[1])

# print("n: " + str(n_people) + "\nq: " + str(n_days))

people = [int(x) for x in input().split()]
days = []

for i in range(n_days):
    days.append(int(input()))

# print(people)
# print(days)

result = []


for i in range(n_days):
    result.append(0)

    for person in people:
        # print(str(days[i]) + " O " + str(person))
        if person < days[i]:
            result[i] += 1
    # print()

for num in result:
    print(num)
