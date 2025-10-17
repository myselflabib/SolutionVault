class Base{
    private int x;


    Base(){
        System.out.println("I am a constructor");
    }
    Base(int a){
        System.out.println("I am a constructor!! with value: "+a);
    }


    void setX(int x){
        this.x = x;
    }

    int getX(){
        return x;
    }
}

class Derived extends Base{
    private int y;

    
    Derived (int x){
        super(x);
        System.out.println("I am Derived class constructor!!");
    }


    void setY(int y){
        this.y = y;
    }

    int getY(){
        return y;
    }
}


public class CWH_CH10_CONSTRUCTOR_INHERITANCE {
    public static void main(String[] args) {

        // Base sy = new Base(13);
        // sy.setX(13);
        // System.out.println("This is Base class X: "+ sy.getX());

        // Derived d = new Derived();
        // d.setX(56);
        // d.setY(123);
        // System.out.println("This is Derived class X: "+d.getX());
        // System.out.println("This is Derived class Y: "+d.getY());

        Derived d = new Derived(15);
    }
}
