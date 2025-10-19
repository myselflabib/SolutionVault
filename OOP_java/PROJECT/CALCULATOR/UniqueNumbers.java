import java.util.*;

public class UniqueNumbers {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Set<Integer> numbers = new HashSet<>();

        System.out.println("Enter 5 unique numbers:");

        while (numbers.size() < 5) {
            System.out.print("Enter number " + (numbers.size() + 1) + ": ");
            int num = input.nextInt();

            if (numbers.contains(num)) {
                System.out.println(num + " is already entered. Please enter a different number.");
            } else {
                numbers.add(num);
            }
        }

        System.out.println("\nThe 5 unique numbers are:");
        for (int n : numbers) {
            System.out.print(n + " ");
        }
    }
}
