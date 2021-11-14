
empty_days = ["shanbe", "1shanbe", "2shanbe", "3shanbe", "4shanbe", "5shanbe", "jome"]

for persons in range(3):
    number_active_days = int(input())
    active_day = input()
    days = active_day.split(" ")

    for day in days:
        # print(day)
        if empty_days.__contains__(day):
            empty_days.remove(day)
    
print(len(empty_days))
