public class CWH_CH07_METHOD {


    //this will be called without creating object.
    // static int Logic(int x, int y){
    //     int z;
    //     if (x>y) {
    //         z = x+y;
    //     }

    //     else{
    //         z = (x+y)*5;
    //     }

    //     return z;
    // }


    //this will called using Object.
    int Logic(int x, int y){
        int z;
        if (x>y) {
            z = x+y;
        }

        else{
            z = (x+y)*5;
        }

        return z;
    }
    public static void main(String[] args) {

        CWH_CH07_METHOD obj = new CWH_CH07_METHOD();
        int a = 5, b = 7, c;

        c = obj.Logic(a, b);

        System.out.println(c);

    }
}
