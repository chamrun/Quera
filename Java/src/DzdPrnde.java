// 0 / 100

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

public class DzdPrnde {


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        t = sc.nextInt();

        for (int i = 0; i < t; i++)
        {
            int n_floors;
            n_floors = sc.nextInt();

            int n_polices;
            n_polices = sc.nextInt();
            HashMap<Integer, Integer> unsorted_polices = new HashMap<>();

            for (int j = 0; j < n_polices; j++)
            {
                int police_floor;
                int police_side;
                police_floor = sc.nextInt();
                police_side = sc.nextInt();
                unsorted_polices.put(police_floor, police_side);
            }

            TreeMap<Integer, Integer> polices = new TreeMap<>(unsorted_polices);
            //System.out.println("\n\n");

            for (int j = 0; j < polices.size() - 1; j++) {
                if (){
                    System.out.println("No");
                    continue;
                }
            }

            for (Map.Entry<Integer, Integer> entry : polices.entrySet())
                System.out.println("Key = " + entry.getKey() +
                        ", Value = " + entry.getValue());



        }
    }
}
