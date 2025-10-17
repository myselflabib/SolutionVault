import javax.sound.sampled.SourceDataLine;

abstract class Base{
    Base(){
        System.out.println("I am Constructor");
    }

    void sayHello(){
        System.out.println("Hello");
    }

    abstract void greet();
}

class Base2 extends Base{
    void greet(){
        System.out.println("Good Morning");
    }

}

public class CWH_CH11_ABSTRACT {

    public static void main(String[] args) {
        
    }
}