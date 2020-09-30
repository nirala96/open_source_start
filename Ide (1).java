/* package codechef; // don't place package name! */

import java.util.Scanner;
class subtractNumbers
{
   public static void main(String args[])
   {
      int x, y, z;

      System.out.println("Enter two integers to calculate their difference");
      Scanner in = new Scanner(System.in);
     
      x = in.nextInt();
      y = in.nextInt();
      z = x - y;
     
      System.out.println("difference of the integers = " + z);
   }
}