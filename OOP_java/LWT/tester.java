public class tester {

    public static void main(String[] args) {
        //Student s1 = new Student("labib", 1);
        // Student s2 = new Student("Devid", 2, 3.75);
        //Student s3 = new Student();

        // s1.makeCall(s2);

        // s1.name = "Labib";
        // s1.id = 01;
        // s2.name = "Bob";
        // s2.id = 2;

        // System.out.println(s1.name+" "+s1.id);
        // System.out.println(s2.name+" "+s2.id);

        // s1 = s2;
        // s1.name = "Devid";
        // System.out.println(s2.name+" "+s2.id);
        
        
        //s1.showDetails();
        //s2.showDetails();

        //s1.standUp();

        // House h1 =new House();
        // House h2 =new House();

        // h1.window = 6;
        // h1.door = 2;

        // h2.window = 4;
        // h2.door = 2;

        // System.out.println("h1 ======");
        // h1.view();

        // System.out.println("h2 =====");
        // h2.view();

        // h1.increaseDoor(1);

        // System.out.println("h1 ======");
        // h1.view();

        //myCalculator c1 = new myCalculator();
        //case-1
        //c1.add(2, 3);

        //case-2
        // int ans = c1.add(4, 5);
        // System.out.println(ans);


        // Dog d1 = new Dog();
        // d1.name = "Rover";

        // d1.bark();
        // d1.eat("bread");
        // d1.eat("bread", 3);

        // Car c1 = new Car();
        // Car c2 = new Car("BMW", "44");
        // Car c3 = new Car("FERRARI", "44", 1919);

        // c1.details();
        // c2.details();
        // c3.details();


        Student s1 = new Student("Bob", 11);
        Student s2 = new Student("Carol", 33);

        Course c1 = new Course("CSE111", "Object Oriented Programming");
        Course c2 = new Course("MAT120");

        s1.addCourse(c1);
        s1.addCourse(c2);

        s1.showDetails();
    }
}