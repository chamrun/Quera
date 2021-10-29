# 100 / 100

def is_good(fruit: dict):
    if fruit['shape'] is 'sphere' and 300 <= fruit['mass'] <= 600 and 100 <= fruit['volume'] <= 500:
        return fruit['name']

    return None


def fruits(fruit_list: tuple):
    ans = {}

    for fruit in fruit_list:
        good_fruit = is_good(fruit)
        if good_fruit is not None:
            if good_fruit not in ans:
                ans[good_fruit] = 1
            else:
                ans[good_fruit] += 1

    return ans
