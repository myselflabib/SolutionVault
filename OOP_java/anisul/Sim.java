import java.util.Scanner;

public class Sim{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Read first product details
        int code1 = sc.nextInt();
        int quantity1 = sc.nextInt();
        double price1 = sc.nextDouble();

        // Read second product details
        int code2 = sc.nextInt();
        int quantity2 = sc.nextInt();
        double price2 = sc.nextDouble();

        // Calculate total amount
        double total = (quantity1 * price1) + (quantity2 * price2);

        // Print result with 2 decimal places
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
    }
}
