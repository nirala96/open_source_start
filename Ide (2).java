/* package codechef; // don't place package name! */

import java.util.Scanner;
class multiplyNumbers
{
   public static void main(String args[])
   {
      int x, y, z;

      System.out.println("Enter two integers to calculate their product");
      Scanner in = new Scanner(System.in);
     
      x = in.nextInt();
      y = in.nextInt();
      z = x * y;
     
      System.out.println("Product of the integers = " + z);
   }
}