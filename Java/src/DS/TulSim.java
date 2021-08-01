package DS;

import java.util.Scanner;

import static java.lang.Math.abs;

public class TulSim {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        /*
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

         */
        int[] x = new int[n];
        int[] y = new int[n];

        int x1 = -1000000;
        int y1 = -1000000;

        int x2 = 1000000;
        int y2 = -1000000;

        int x3 = -1000000;
        int y3 = 1000000;

        int x4 = 1000000;
        int y4 = 1000000;

        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
            y[i] = sc.nextInt();

            if (x1 < x[i] && y1 < y[i])
            {
                x1 = x[i];
                y1 = y[i];
            }
            else if (x[i] < x2 && y2 < y[i])
            {
                x2 = x[i];
                y2 = y[i];
            }
            else if (x3 < x[i] && y[i] < y3)
            {
                x3 = x[i];
                y3 = y[i];
            }
            else if (x[i] < x4 && y[i] < y4)
            {
                x4 = x[i];
                y4 = y[i];
            }
            else if(x2 < x[i] && x4 < x[i] && x[i] < x1 && x[i] < x3
                &&  y3 < y[i] && y4 < y[i] && y[i] < y1 && y[i] < y2)
            {
                i--;
                n--;
            }
        }

        int max = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int distance = abs(x[i] - x[j]) + abs(y[i] - y[j]);

                if (max < distance)
                    max = distance;
            }
        }

        System.out.println(/*"1: (" + x1 + "," + y1 + ")\n" +
                "2: (" + x2 + "," + y2 + ")\n" +
                "3: (" + x3 + "," + y3 + ")\n" +
                "4: (" + x4 + "," + y4 + ")\n" +
                */
                max);

    }
}
/*

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

 */
