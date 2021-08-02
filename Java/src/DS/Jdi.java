//package DS;

import java.util.Scanner;

public class Jdi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];

        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }

        int last_b = a[0];
        int size_b = 1;

        for (int i = 1; i < n; i++) {

            while (size_b % 2 == 1){
                if (last_b < a[i]){
                    size_b++;
                    last_b = a[i];
                }
                else {
                    last_b = a[i];
                    i++;
                    if (i == n){
                        System.out.println(size_b);
                        System.exit(0);
                    }
                }
            }

            while (size_b % 2 == 0){
                if (a[i] < last_b){
                    size_b++;
                    last_b = a[i];
                }
                else {
                    last_b = a[i];
                    i++;
                    if (i == n){
                        System.out.println(size_b);
                        System.exit(0);
                    }
                }
            }
        }

        System.out.println(size_b);

    }
}
