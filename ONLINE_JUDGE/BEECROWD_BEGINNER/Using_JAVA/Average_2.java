import java.util.Scanner;

public class Average_2 {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        float a = sc.nextFloat(), b = sc.nextFloat(), c = sc.nextFloat();
        
        System.out.printf("MEDIA = %.1f\n", (a*2+b*3+c*5)/(2+3+5) );
    }
}