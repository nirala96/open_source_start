import java.util.Scanner;

import java.util.Scanner;
public class area {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double area,circumference;
		
        System.out.println("Enter radius");
        double r = scan.nextDouble();
        area=Math.PI*r*r;
        circumference=2*Math.PI*r;
        System.out.println("area: "+area);
        System.out.println("circumference : "+circumference);
        
    }
    
}