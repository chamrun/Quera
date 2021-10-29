import math


def game(number):
    a = number % 10
    b = (number - a) / 10
    ans = math.trunc(a - b)

    if ans < 0:
        ans = -ans

    return ans

