import java.util.Scanner;

public class MaxFourEasy {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] numbers = new int[11];
        int count = 0;

        System.out.println("Enter 11 numbers (any number can appear up to 4 times):");

        while (count < 11) {
            System.out.print("Enter number " + (count + 1) + ": ");
            int num = input.nextInt();

            // count how many times 'num' has already appeared
            int repeat = 0;
            for (int i = 0; i < count; i++) {
                if (numbers[i] == num) {
                    repeat++;
                }
            }

            if (repeat >= 4) {
                System.out.println(num + " has already been entered 4 times! Try another number.");
            } else {
                numbers[count] = num;
                count++;
            }
        }

        System.out.println("\nAll 11 numbers:");
        for (int i = 0; i < 11; i++) {
            System.out.print(numbers[i] + " ");
        }
    }
}
