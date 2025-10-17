public class CWH_ARRAY_CH06 {
    public static void main(String[] args) {
        //classroom of 500 student- I have to store mark of these student.

        // in this circumstences we need to use array.

        // int[] marks = new int[5];

        // int[] marks;
        // marks = new int[5];

        // marks[0] = 100;
        // marks[1] = 79;
        // marks[2] = 98;
        // marks[3] = 90;
        // marks[4] = 96;


        //declaration, memory allocation and initialization together

        // int[] marks = {2, 4, 6, 7, 8};
        
        // //System.out.println(marks.length);

        // for(int i: marks){
        //     System.out.println(i);
        // }


        int[][] flats;
        flats = new int[2][3];

        flats[0][0] = 101;
        flats[0][1] = 102;
        flats[0][2] = 103;
        flats[1][0] = 201;
        flats[1][1] = 202;
        flats[1][2] = 203;

        for (int i = 0; i < flats.length; i++) {
            for (int j = 0; j < flats[i].length; j++) {
                System.out.print(flats[i][j]+" ");
            }
            System.out.println();
        }

    }
}
