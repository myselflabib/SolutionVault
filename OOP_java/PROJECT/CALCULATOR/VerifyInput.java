import java.util.Scanner;

public class VerifyInput {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] numbers = new int[10];

        for (int i = 0; i < 10; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            numbers[i] = input.nextInt();

            System.out.print("You have entered: ");
            for (int j = 0; j <= i; j++) {
                System.out.print(numbers[j]);
                if (j < i) System.out.print(", ");
            }
            System.out.println(); // new line
        }
    }
}
