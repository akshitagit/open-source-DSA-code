import java.util.Scanner;

public class reverse {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);

        int a = in.nextInt();
        int rev=0;

        while(a > 0) {
            int rem = a % 10;
            a /= 10;

            rev = rev * 10 + rem;
        }
        System.out.println(rev);





    }
}
