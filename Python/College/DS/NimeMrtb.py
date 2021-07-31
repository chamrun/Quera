n = int(input())
numbers = [int(x) for x in input().split()]
# sorted_numbers = sorted(numbers)


# print(numbers)
# print(sorted_numbers)
# exit(0)


n_wrongs = 0

for i in range(n):

    if numbers[i] != i + 1:
        if numbers[numbers[i]] != numbers[i] + 1:
            print("NO")
            exit(0)

        n_wrongs += 1

        if 2 < n_wrongs:
            print("NO")
            exit(0)

print("YES")
