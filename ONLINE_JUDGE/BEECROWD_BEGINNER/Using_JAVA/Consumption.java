import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int distance = sc.nextInt();       
        double fuel = sc.nextDouble();     

        double average = distance / fuel;  

        System.out.printf("%.3f km/l\n", average);
    }
}
