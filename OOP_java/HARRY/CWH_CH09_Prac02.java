import java.util.Scanner;

class Cylinder{
    private int radious;
    private int height;

    public int getRadious(){
        return radious;
    }
    public void setRadious(int radious){
        this.radious = radious;
    }
    public int getHeight(){
        return height;
    }
    public void setHeight(int height){
        this.height = height;
    }
}

public class CWH_CH09_Prac02 {
    public static void main(String[] args) {
        Cylinder cyl = new Cylinder();

        Scanner sc = new Scanner(System.in);
        cyl.setHeight(sc.nextInt());
        cyl.setRadious(sc.nextInt());

        
        System.out.println("The height of the cylinder is: " + cyl.getHeight());
        System.out.println("The radious of the cylinder is: " + cyl.getRadious());
    }
}
