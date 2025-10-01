import java.util.Scanner;

public class Salary_with_Bonus {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        double salary = sc.nextDouble();
        double sold = sc.nextDouble();

        System.out.printf("TOTAL = R$ %.2f%n", salary+(0.15*sold));
    }
}