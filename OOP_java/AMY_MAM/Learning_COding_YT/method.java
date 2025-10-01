public class method {

    static void add(){
        int a = 10, b = 30;
        System.out.println(a+b);
    }
    public static void main(String[] args) {

        method ref = new method();
        ref.disp();
        method.add();
    }
    
    void disp(){
        System.out.println("My name is Labib");
    }
}
