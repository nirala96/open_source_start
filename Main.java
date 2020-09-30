import java.util.*;
import java.lang.*;
import java.io.*;

class account{
    private int number;
    private int pin;
    private int balance;
    private String name;
    
    public void info(String N,int n,int p)
    {
        number =n;
        name=N;
        pin=p;
        balance=0;
    }
    public void deposit(int a){balance +=a;}
    public int pincheck(int p){
      int a;
      if (p==pin)
      a=1;
      else
      a=0;    
      return a;
    }
    public int getBalance(){return balance;}
    public void type(int x){number =x;}
    void fine()
    {
        if(number==1)
        { System.out.println("Account Type: Regular Account");
          System.out.println("Charges- Smaller of Rs.50 or 10% of the Balance at Month end");
          System.out.println("Fine- Rs.100 if balance falls below Rs.500");
        }
        if(number==2)
        {System.out.println("Account Type: Interest Account");
         System.out.println("Charges- Smaller of Rs.50 or 10% of the Balance at Month end");
         System.out.println("No Minimum Balance required");
         System.out.println("Interest - 7% to be paid monthly");
        }
        if(number==3)
        {System.out.println("Account Type: Checking Account");
         System.out.println("Charges- Smaller of Rs.50 or 10% of the Balance at Month end");
         System.out.println("Annual Interest - 7% to be paid monthly");
         System.out.println("Fine- Rs.50 if balance falls below Rs.1000");
         System.out.println("Charge per Transaction- 0.1% based on transaction");
        }
        if(number==4)
        {System.out.println("Account Type: CD Account");
         System.out.println("Charges- Smaller of Rs.50 or 10% of the Balance at Month end");   
         System.out.println("No Minimum Balance required");
         System.out.println("Interest to be paid yearly-15%");
         System.out.println("Fine- 20% of the current balance if there is a withdrawl before 12 months");
        }
    }
}

public class Main{
    public static void main (String[] args){
        System.out.println("WELCOME TO THE BANK - Branch 201951005");
        account A = new account();
        Scanner s= new Scanner(System.in);
        String name;
        System.out.println("Open an account");
        System.out.println("Enter Name : ");
        name=s.next();
        System.out.println("WELCOME\nPlease Select Account type :-");
        System.out.println("1- Regular Account");
        System.out.println("2- Interest Account");
        System.out.println("3- Checking Account");
        System.out.println("4- CD Account");
        int a= s.nextInt();
        A.type(a);
        System.out.println("DISCLAIMER");
        A.fine();
        System.out.println("Generate a PIN - ");
        int p=s.nextInt();
        A.info(name,a,p);
        int k=0,y;
        while(k==0)
        {
            System.out.println("CHOOSE OPERATION :-");
            System.out.println("1- Deposit");
            System.out.println("2- Check Balance");
            int choice=s.nextInt();
            System.out.println("ENTER YOUR PIN");
            int g=s.nextInt();
            int r=A.pincheck(g);
            if(r!= 1)
            {
                System.out.println("Invalid, booting......");
                break;}
            else{
                if(choice==1){
                    System.out.println("Enter Amount");
                    y=s.nextInt();
                    A.deposit(y);
                }
                else if(choice==2){
                    y=A.getBalance();
                    System.out.println("Your Balance is :: Rs."+y);
                }
                else
                System.out.println("Invalid choice");
            } 
            System.out.println("To use the Menu Again Type 0, and to exit Type 1");
            k=s.nextInt();
        }
    }
}