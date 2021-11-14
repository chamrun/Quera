the_input = input()

for i in range(int(len(the_input) / 2) + 1):
    if the_input[i] != the_input[-1 - i]:
        # print(the_input[i] + " != " + the_input[-1 + i])
        print("NO")
        exit(0)

print("YES")
