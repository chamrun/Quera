
# 100 / 100


def day_of_month(x: int):
    if x <= 6:
        return ((x - 1) * 31)
    return ((x - 7) * 30) + 186


def main():
    x_input = input()
    y_input = input()

    month_x, day_x = [int(n) for n in x_input.split()]
    month_y, day_y = list(map(int, y_input.split()))

    if month_y < month_x:
        res = day_of_month(month_x) - day_of_month(month_y) + day_x - day_y
    else:
        res = day_of_month(month_y) - day_of_month(month_x) + day_y - day_x

    print(res)


if __name__ == '__main__':
    main()
    