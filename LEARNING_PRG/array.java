import java.util.Arrays;

public class array {
    public static void main(String[] args){
        // int[] marks = new int[4];
        // marks[0] = 98;
        // marks[1] = 99;
        // marks[2] = 94;
        // marks[3] = 100;
        // System.out.println(marks[0]);
        // System.out.println(marks[1]);
        // System.out.println(marks[2]);
        // System.out.println(marks[3]);
        
        // System.out.println(marks.length);

        // Arrays.sort(marks);

        int[] marks = {98, 97, 92, 94};
        int[][] finalMarks = {{98, 97, 92, 94}, {97, 94, 91, 90}};

        System.out.println(finalMarks[0][0]);
        System.out.println(finalMarks[1][1]);
        System.out.println(finalMarks[1][2]);
        System.out.println(finalMarks[1][3]);

    }
}
