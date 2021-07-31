import java.util.Scanner;

public class Charpack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int ones, twos, threes;
        ones = twos = threes = 0;

        for (int i = 0; i < n; i++) {
            int temp = sc.nextInt();

            switch (temp){
                case 1:
                    ones++;
                    break;
                case 2:
                    twos++;
                    break;
                case 3:
                    threes++;
                    break;
                default:
                    System.out.println(temp + " is undefined.");
                    break;
            }
        }



        int packs = 0;

        while (0 < ones + twos + threes){
            packs++;
            int nThisPack = 4;
            while (0 < nThisPack && 0 < ones){
                ones--;
                nThisPack--;
            }
            while (0 < nThisPack && 0 < twos){
                twos--;
                ones++;
                nThisPack--;
            }
            while (0 < nThisPack && 0 < threes){
                threes--;
                twos++;
                nThisPack--;
            }
        }

        System.out.println(packs);
    }
}
