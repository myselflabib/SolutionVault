import java.util.Scanner;
public class Average_1 {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        float a = sc.nextFloat(), b = sc.nextFloat();
        System.out.printf("MEDIA = %.5f%n", ((3.5*a)+(7.5*b))/(3.5+7.5));
    }
}