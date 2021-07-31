
import java.util.Scanner;

public class MsahtMhsur {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] numbers = new int[n];

        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextInt();
        }


        int result = 0;

        for (int index = 0; index < n; index++) {
            int index_max = numbers[index];

            int i = 1;
            while ((-1 < index - i) && (numbers[index] <= numbers[index - i])) {
                index_max += numbers[index];
                i += 1;
            }

            i = 1;
            while ((index + i < n) && numbers[ index] <=numbers[index + i]) {
                index_max += numbers[index];
                i += 1;
            }

            if (result < index_max) {
                result = index_max;
            }
        }


        System.out.println(result);

    }
}
