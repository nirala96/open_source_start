import java.util.Scanner;

public class simple_interest {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double simple_interest;
        System.out.println("Enter principal rate and time period respectively");
        double p = scan.nextDouble();
        double r = scan.nextDouble();
        double t = scan.nextDouble();
        simple_interest = p*r*t/100;
        System.out.println("Simple Interest : "+simple_interest);
    }
    
}