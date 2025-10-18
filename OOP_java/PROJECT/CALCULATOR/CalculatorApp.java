package Calculator;
import Calculator.*;

import java.util.Scanner;

// 🔹 Abstract Class (Abstraction)
abstract class CalculatorBase {
    // Abstract methods — to be implemented by subclass
    abstract double add(double a, double b);
    abstract double subtract(double a, double b);
    abstract double multiply(double a, double b);
    abstract double divide(double a, double b);
}

// 🔹 Concrete Class (Inheritance + Encapsulation + Polymorphism)
class BasicCalculator extends CalculatorBase {
    // Private data (Encapsulation)
    private double result;

    // Overridden methods (Polymorphism)
    @Override
    double add(double a, double b) {
        result = a + b;
        return result;
    }

    @Override
    double subtract(double a, double b) {
        result = a - b;
        return result;
    }

    @Override
    double multiply(double a, double b) {
        result = a * b;
        return result;
    }

    @Override
    double divide(double a, double b) {
        if (b == 0) {
            System.out.println("❌ Error: Division by zero!");
            return 0;
        }
        result = a / b;
        return result;
    }

    // Getter for result (Encapsulation)
    public double getResult() {
        return result;
    }
}

// 🔹 Main Class
public class CalculatorApp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BasicCalculator calc = new BasicCalculator(); // Object creation

        System.out.println("=== 🧮 OOP Calculator ===");
        System.out.print("Enter first number: ");
        double num1 = sc.nextDouble();

        System.out.print("Enter second number: ");
        double num2 = sc.nextDouble();

        System.out.println("Choose operation: +  -  *  / ");
        char op = sc.next().charAt(0);

        double result = 0;

        switch (op) {
            case '+':
                result = calc.add(num1, num2);
                break;
            case '-':
                result = calc.subtract(num1, num2);
                break;
            case '*':
                result = calc.multiply(num1, num2);
                break;
            case '/':
                result = calc.divide(num1, num2);
                break;
            default:
                System.out.println("❌ Invalid operation!");
                return;
        }

        System.out.println("Result = " + result);
        sc.close();
    }
}
