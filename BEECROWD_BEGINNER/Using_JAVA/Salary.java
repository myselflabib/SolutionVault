import java.util.Scanner;

public class Salary {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int salary = sc.nextInt();
        float hour = sc.nextFloat();

        System.out.println("NUMBER = " + num);
        System.out.printf("SALARY = U$ %.2f%n", (salary*hour));
    }
}
