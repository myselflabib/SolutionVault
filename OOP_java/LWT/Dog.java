public class Dog {
    public String name;

    public void eat(String fd){
        System.out.println(name+" is eating");
    }

    public void eat(String fd, int n){
        System.out.println(name+" is eating "+n+" "+fd);
    }

    public void bark(){
        System.out.println(name+" is Barking");
    }
}
