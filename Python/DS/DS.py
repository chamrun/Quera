def f(x):
    if x == 0:
        return 0
    return x + f(x - 1)


if __name__ == '__main__':
    x = f(100)
    print(x)