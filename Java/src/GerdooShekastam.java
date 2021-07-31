import java.util.Scanner;

public class GerdooShekastam {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();

        if (n % x == 0){
            System.out.println((n / x) + " 0");
            return;
        }

        if (n % y == 0){
            System.out.println("0 " + (n / y));
            return;
        }

        int nX = 1;

        while (nX * x < n){
            if ((n - (nX * x)) % y == 0){
                System.out.println(nX + " " + (n - (nX * x)) / y);
                return;
            }
            nX++;
        }
        System.out.println("-1");
    }
}
