class Employee{
    int id;
    String name;

    public void Display(){
        System.out.println("Employee ID: "+id);
        System.out.println("Employee name: "+name);

    }
}



public class CWH_CH08_CUSTOM_CLS {
    public static void main(String[] args) {
        // System.out.println("This is our custom class");

        Employee Harry = new Employee(); //instatiating a new Employee Object

        //setting attributes
        Harry.id = 12;
        Harry.name = "CodeWithHarry";

        //printing the attributes
        // System.out.println(Harry.id+" "+Harry.name);

        Harry.Display();
    }
}
