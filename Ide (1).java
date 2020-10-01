/* package codechef; // don't place package name! */

import java.util.Scanner;
class subtractNumbers // class statement 
{
   public static void main(String args[]) // main from where program will start to wrok
   {
      int x, y, z;

      System.out.println("Enter two integers to calculate their difference");
      Scanner in = new Scanner(System.in); // creating sacanner object to input output operations
     
      x = in.nextInt();
      y = in.nextInt();
      z = x - y;
     
      System.out.println("difference of the integers = " + z); // printing results
   }
}