class Employee{
    private int id;
    private String name;

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    public int getId(){
        return id;
    }

    public void setId(int id){
        this.id = id;
    }
}

public class CWH_CH09_ACCESS_MOD {
    public static void main(String[] args) {
        Employee Labib = new Employee();

        Labib.setId(123);
        System.out.println(Labib.getId());

        Labib.setName("LABIB");
       System.out.println( Labib.getName());
    }
}
