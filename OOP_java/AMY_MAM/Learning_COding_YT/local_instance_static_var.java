public class local_instance_static_var {
    static int y = 20; //static varible

    int z = 30; //instance variable
    public static void main(String[] args) {
        int x = 10; //local variable

        local_instance_static_var ref = new local_instance_static_var();

        System.out.println(x);
        System.out.println(local_instance_static_var.y);
        System.out.println(ref.z);
    }
}
