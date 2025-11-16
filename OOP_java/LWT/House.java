public class House {
    public int window;
    public int door;

    public void increaseDoor(int door){
        this.door += door;
    }

    public void view(){
        System.out.println(window+" windows");
        System.out.println(door+" doors");
    }
}
