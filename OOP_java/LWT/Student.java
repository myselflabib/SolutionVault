import java.util.Vector;
public class Student {
    
    // public String name;
    // public int id;

    // public double cgpa;

    // public Student(){
    //     System.out.println("I am a constructor");
    // }

    // public Student(String name, int id){
    //     this.name = name;
    //     this.id = id;
    // }

    // public Student(String name, int id, double cgpa){
    //     this.name = name;
    //     this.id = id;
    //     this.cgpa = cgpa;
    // }

    // public void makeCall(Student x){
    //     System.out.println("I am "+name);
    //     System.out.println(x);
    // }

    // public void showDetails(){
    //     System.out.println(name+" "+id);
    // }

    // public void standUp(){
    //     System.out.println(name+" is now standing");
    // }


    // public String name;
    // public int id;
    // public Course[] courses = new Course[5];
    // public int courseCount = 0;
    

    // public Student(String nm, int i){
    //     name = nm;
    //     id = i;
    // }

    // public void addCourse(Course c){
    //     courses[courseCount] = c;
    //     courseCount++;
    // }

    // public void showDetails(){
    //     System.out.println("Name: "+name);
    //     System.out.println("ID: "+ id);
    //     System.out.println("Courses Taken: ");
    //     for(int i = 0; i<courseCount; i++){
    //         System.out.println("CODE: "+courses[i].code+" | TITLE: "+courses[i].title);
    //     }
    // }


    String name;
    int id;
    static int count = 0;

    public Student(String nm, int id){
        name = nm;
        this.id = id;
        count++;
    }

    // public void updateID(int i){
    //     if(i>0) id = i;
    //     else System.out.println("Invalid id");
    // }

    // private void method1(){
    //     System.out.println("this is private method");
    // }

    public void showDetails(){
        //method1();
        System.out.println("Name: " + name+ " ID: "+ id);
    }
}

