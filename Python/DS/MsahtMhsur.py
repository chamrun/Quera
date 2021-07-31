def get_max(numbers, index):
    # print("Function was called. index: " + str(index))
    index_max = numbers[index]

    i = 1
    while -1 < index - i and numbers[index] <= numbers[index - i]:
        # print(-1 < index - i)
        # print(index - i)
        index_max += numbers[index]
        # print("+= " + str(numbers[index - i]) + " (" + str(index - 1) + ")")
        i += 1
    # print()

    i = 1
    while index + i < len(numbers) and numbers[index] <= numbers[index + i]:
        index_max += numbers[index]
        # print("+= " + str(numbers[index + i]) + " (" + str(index + 1) + ")")
        i += 1
    # print()

    return index_max


n = int(input())

numbers = [int(x) for x in input().split()]

# print(numbers)

max = 0

for index in range(len(numbers)):
    index_max = get_max(numbers, index)
    # print(index_max)

    if max < index_max:
        # print("New max: " + str(index_max) + "(" + str(index) + ")")
        max = index_max


print(max)
