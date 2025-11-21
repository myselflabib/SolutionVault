public class Player {
    public int run = 0;
    static int  teamRun = 0;

    public void hit_four(){
        run = run+4;
        teamRun = teamRun+4;
    }

    public void hit_six(){
        run = run+6;
        teamRun = teamRun+6;
    }
}
