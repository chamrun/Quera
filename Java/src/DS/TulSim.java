// ToDo

//package DS;


import java.util.Scanner;

import static java.lang.Math.abs;

public class TulSim {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        Location[] locations = new Location[n];

        for (int i = 0; i < n; i++) {
            locations[i] = new Location(sc.nextInt(), sc.nextInt());
        }

        int max = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int distance = locations[i].distance(locations[j]);

                if (max < distance)
                    max = distance;
            }
        }

        System.out.println(max);

    }
}

class Location{
    int x;
    int y;

    public Location(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int distance(Location location) {
        return abs(x - location.x) + abs(y - location.y);
    }
}
