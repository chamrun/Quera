import java.util.Scanner;

public class MrbbahaVaMshklatEqtsadi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nGlasses = sc.nextInt();
        int vGlasses = sc.nextInt();


        int sum = 0;
        for (int i = 0; i < nGlasses; i++) {
            sum += sc.nextInt();
        }

        System.out.println(((nGlasses * vGlasses - sum) / vGlasses));
    }
}
