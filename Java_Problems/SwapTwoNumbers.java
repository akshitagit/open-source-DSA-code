/*
	Input two Integer. The program will take the Integer value and swap it without using any extra variables.

    Solution: ...	
*/
import java.util.Scanner;

 public class Solution {
    public void SwapTwoNumbers () 
    {
		Scanner in = new Scanner(System.in);
        System.out.println("Enter First Integer and press enter");
        int firstInteger = in.nextInt();

        System.out.println("Enter Second Integer and press enter");
        int secondInteger = in.nextInt();

        System.out.println("\nBefore Swapping \nFirst Integer = "+ firstInteger +"\nSecondc Integer = "+ secondInteger);

        firstInteger = firstInteger + secondInteger;
        secondInteger = firstInteger - secondInteger;
        firstInteger = firstInteger - secondInteger;

        System.out.println("\nAfter Swapping \nFirst Integer = "+ firstInteger +"\nSecondc Integer = "+ secondInteger);
    }
}