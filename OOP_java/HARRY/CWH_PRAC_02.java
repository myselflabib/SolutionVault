import java.util.Scanner;

public class CWH_PRAC_02 {
    public static void main(String[] args) {
        // int n = 4;
        // for (int i = 0; i <= n; i++) {
        //     for (int j = 0; j <= i; j++) {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // for (int i = n; i>=0; i--) {
        //     for (int j = 0; j <= i; j++) {
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }

        // int n = 50, sum =0;
        // for (int i = 1; i <= 50; i+=2) {
        //     // if (i%2==0) {
        //     //     sum+=i;
        //     // }

        //     sum+=i;
            
        // }

        // System.out.println(sum);

        // Scanner sc = new Scanner(System.in);

        // int n = sc.nextInt();

        // for (int i = 1; i <= 10; i++) {
        //     System.out.printf("%d X %d = %d\n", i, n, i*n);
        // }


        int n = 5;
        int i = 1;

        int fact = 1;
        while (i<=n) {
            fact*=i;
            i++;
        }

        System.out.println(fact);
    }
}
