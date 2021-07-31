import time

Start = time.time()
print(Start)

n = int(input())
numbers = []

numbers_string = input()
numbers_string = numbers_string.split(" ")
# print(numbers_string)

for number_string in numbers_string:
    numbers.append(int(number_string))

# print(numbers)

result = 0

for index in range(len(numbers)):

    index_max = numbers[index]

    i = 1
    while -1 < index - i and numbers[index] <= numbers[index - i]:
        index_max += numbers[index]
        i += 1

    i = 1
    while index + i < len(numbers) and numbers[index] <= numbers[index + i]:
        index_max += numbers[index]
        i += 1

    if result < index_max:
        result = index_max


print(result)

End = time.time()
print(End)
