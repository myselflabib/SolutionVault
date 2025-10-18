import java.util.Scanner;

abstract class Calculatorbase{
    abstract double add(double a, double b);
    abstract double subtract(double a, double b);
    abstract double multiply(double a, double b);
    abstract double divide(double a, double b);
}

class BasicCalcu extends Calculatorbase{
    private double result;

    //@Override
    double add(double a, double b){
        return (a+b);
    }

   // @Override
    double subtract(double a, double b){
        return (a-b);
    }

    //@Override
    double multiply(double a, double b){
        return (a*b);
    }

    double divide(double a, double b){
        if(b==0){
            return 0;
        }

        return (a/b);
    }
}

public class Calculator_me {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BasicCalcu calc = new BasicCalcu();

        System.out.println("----------OOP CALC----------");

        System.out.println("Enter A: ");
        double a = input.nextDouble();

        System.out.println("Enter B: ");
        double b = input.nextDouble();

        System.out.println("Choose Operator: + - * /");
        char c = input.next().charAt(0);

        switch (c) {
            case '+':
                System.out.println("Result: "+ calc.add(a, b));
                break;

                case '-':
                System.out.println("Result: "+ calc.subtract(a, b));
                break;

                case '*':
                System.out.println("Result: "+ calc.multiply(a, b));
                break;

                case '/':
                System.out.println("Result: "+ calc.divide(a, b));
                break;
        
            default:
                System.out.println("Invalid Operator");
                break;
        }
    }

    

}
