nk = input().split()
n = int(nk[0])
k = int(nk[1])

nums = [int(x) for x in input().split()]

# print(min(nums))
# exit(0)


min_acts = 9223372036854775807

for a in range(min(nums) - k, max(nums) + 1):
    acts = 0

    for i in range(n):
        acts += abs(nums[i] - (a + k * i))

    # print("a = " + str(a) + " -> " + str(acts))

    if acts < min_acts:
        min_acts = acts

print(min_acts)
