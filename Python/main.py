
string = input()

while string[0] == "=":
    string = string[1:]

while string.__contains__("="):
    index = string.index("=")
    # print(string + " : " + str(index))
    # print(string[:index - 1] + " + " + string[index + 1:])
    string = string[:index - 1] + string[index + 1:]
    # print(string + "\n")

    if 0 < len(string):
        while string[0] == "=":
            string = string[1:]

            if len(string) == 0:
                print(string)
                exit(0)

print(string)
