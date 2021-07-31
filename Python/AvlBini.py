import sympy

start = int(input())
end = int(input())
isFirst = True

for i in range(start, end):
    if sympy.isprime(i):
        if isFirst:
            print(i, end="")
            isFirst = False
        else:
            print("," + str(i), end="")

