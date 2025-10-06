

public class Class_Object {

    public static class Student {
    
        String name;
        int roll;
        int cls;

        Student(String name, int roll, int cls){
            this.name = name;
            this.roll = roll;
            this.cls = cls;
        }

        
    }

    public static void main(String[] args) {
            Student std1 = new Student("Labib", 1, 5);
            System.out.println(std1.name+ std1.cls+std1.roll);
        }

    
}