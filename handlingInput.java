import java.util.Scanner;

class Main{
  public static void main(String[] args ){
    System.out.print("First name:");
    Scanner name = new Scanner(System.in);
    String firstName = name.next();
    
    System.out.print("My name is " + firstName + ".");
  }
}
