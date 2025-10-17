package LABIB;

class Base{
    private int x;


    void setX(int x){
        this.x = x;
    }

    int getX(){
        return x;
    }
}

class Derived extends Base{
    private int y;


    void setY(int y){
        this.y = y;
    }

    int getY(){
        return y;
    }
}

public class CWH_CH10_inheritance {
    public static void main(String[] args) {

        Base sy = new Base();
        sy.setX(13);
        System.out.println("This is Base class X: "+ sy.getX());

        Derived d = new Derived();
        d.setX(56);
        d.setY(123);
        System.out.println("This is Derived class X: "+d.getX());
        System.out.println("This is Derived class Y: "+d.getY());
    }
}
