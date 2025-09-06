import java.util.Scanner;

public class Area_of_a_Circle {

    public static void main(String[] srgs){
        Scanner sc = new Scanner(System.in);
        double n = sc.nextDouble();
        
        double pi = 3.14159;        
        double A = pi*n*n;      

        System.out.printf("A=%.4f%n", A);
    }

}