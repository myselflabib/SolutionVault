public class Teacher {

    String name, gender;
    int phone, age;

    Teacher(){
        System.out.println("No value");
    }

    Teacher(String n, String g, int m){ //
        name = n;
        gender = g;
        age = m;
    }

    void display(){
        System.out.println("name: "+name);
        System.out.println("Gender: "+gender);
        System.out.println("Age: "+age);
    }
    public static void main(String[] args) {
        System.out.println();
        Teacher teacher1 = new Teacher("anisul", "male", 27);

        Teacher teacher2 = new Teacher();

        teacher1.display();
        System.out.println();
        teacher2.display();
    }
}