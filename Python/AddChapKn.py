digits = input()

for digit in digits:
    print(digit + ": ", end="")
    int_digit = int(digit)

    for i in range(int_digit):
        print(digit, end="")

    print()
