import java.util.Arrays;
import java.util.Scanner;

public class SortingStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int numberOfInputs = sc.nextInt();
        sc.nextLine();

        String[] strings = new String[numberOfInputs];

        for (int i = 0; i < numberOfInputs; i++) {
            strings[i] = sc.nextLine();
        }

        Arrays.sort(strings);

        for (int i = 0; i < 3; i++) {
            String command = sc.nextLine();

            switch (command){
                case "max":
                    System.out.println(strings[numberOfInputs - 1]);
                    break;

                case "min":
                    System.out.println(strings[0]);
                    break;

                case "sort":
                    for (int j = 0; j < numberOfInputs; j++) {
                        System.out.print(strings[j] + " ");
                    }
                    System.out.println();
                    break;

                default:
                    System.out.println("=/");
                    break;
            }
        }


    }
}

