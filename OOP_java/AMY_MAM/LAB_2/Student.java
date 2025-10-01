//package LAB_2;
import java.util.Scanner;


class DefaultConstructor{
    String name;
    int age;

    void Display(){
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        age = sc.nextInt();
        System.out.println("Name = "+name+"\tage = "+age);
    }
}

public class Student {

    public static void main(String[] args) {
        DefaultConstructor Obj1 = new DefaultConstructor();
        DefaultConstructor Obj2 = new DefaultConstructor();
        Obj1.Display();
        Obj2.Display();
    }
}