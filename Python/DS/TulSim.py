# ToDo

class Location:
    def __init__(self, xy):
        self.x = xy[0]
        self.y = xy[1]

    def distance(self, x2, y2):
        return abs(x2 - self.x) + abs(y2 - self.y)


n = int(input())
locations = []

for i in range(n):
    location = Location([int(x) for x in input().split()])
    locations.append(location)

# for i in range(n):
#    print(locations[i].x + locations[i].y)

max_distance = 0

for i in range(n):
    for j in range(i + 1, n):
        distance = locations[i].distance(locations[j].x, locations[j].y)

        if max_distance < distance:
            max_distance = distance

print(max_distance)
