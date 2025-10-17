import java.nio.channels.Pipe.SourceChannel;
import java.util.Scanner;

public class CWH_EX01 {
    public static void main(String[] args) {
        float subMark[] = new float[5];
        Scanner sc = new Scanner(System.in);

        int sum =0;
        for(int i = 0; i<5; i++){
            subMark[i] = sc.nextFloat();
            sum += subMark[i];
        }

        System.out.printf("Marks in Percentage: %.2f\n", ((sum/500.0)*100));


    }
}
