class Employee{
    String name;
    int id;

    Employee(){
        id = 45;
        name = "Your-name-here";
    }

    Employee(String name, int id){
        this.name = name;
        this.id = id;
    }
}

public class CWH_CHA09_Constructor {
    public static void main(String[] args) {
        Employee harry = new Employee("Labib", 45);

        System.out.println(harry.id+" "+harry.name); 
    }
    
    
}
