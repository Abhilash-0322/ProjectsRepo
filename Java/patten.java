public class patten {
    public static void main(String[] args) {
        int n = 19; // Change this value to control the size of the triangle

        // Outer loop for rows
        for (int i = 1; i <= n; i++) {
            // Inner loop for columns
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}