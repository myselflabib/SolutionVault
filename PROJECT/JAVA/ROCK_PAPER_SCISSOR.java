import java.util.Scanner;
import java.util.Random;

public class ROCK_PAPER_SCISSOR {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cNum = (int)(Math.random()*3)+1;

        System.out.println("\nEnter your choice: 1=Rock, 2=Paper, 3=Scissors");
        int uNum = sc.nextInt();

        String[] choices = {"", "Rock", "Paper", "Scissors"};

        if (cNum == uNum) {
            System.out.println("Draw!");
        }
        else if (cNum == 1 && uNum == 2) {
            System.out.println("Computer Choose: " + choices[cNum] + "\nUser Choose: " + choices[uNum] + "\nUser Win !!!");
        }
        else if(cNum == 2 && uNum == 1){
            System.out.println("Computer Choose: " + choices[cNum] + "\nUser Choose: " + choices[uNum] + "\nComputer Win !!!");
        }
        else if(cNum == 2 && uNum == 3){
            System.out.println("Computer Choose: " + choices[cNum] + "\nUser Choose: " + choices[uNum] + "\nUser Win !!!");
        }
        else if(cNum == 3 && uNum == 2){
            System.out.println("Computer Choose: " + choices[cNum] + "\nUser Choose: " + choices[uNum] + "\nComputer Win !!!");
        }
        else if(cNum == 3 && uNum == 1){
            System.out.println("Computer Choose: " + choices[cNum] + "\nUser Choose: " + choices[uNum] + "\nUser Win !!!");
        }
        else if(cNum == 1 && uNum == 3){
            System.out.println("Computer Choose: " + choices[cNum] + "\nUser Choose: " + choices[uNum] + "\nComputer Win !!!");
        }
    }
}