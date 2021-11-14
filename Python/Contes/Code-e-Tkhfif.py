# I know this is a piece of cake. I'm just bored.
# 0 / all

if __name__ == '__main__':
    data = input()
    n, certain_code = data.split()
    n = int(n)

    for i in range(n):
        doubtful_code = input()
        is_valid = True

        for char in doubtful_code:
            if char not in certain_code:
                # print(doubtful_code)
                print("No")
                is_valid = False
                break

        if is_valid:
            # print(doubtful_code)
            print("Yes")
