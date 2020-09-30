import java.util.*;
class create_account
{
    String name,acc_type;
    double money;
    int acc_num;
    create_account(String acc_name,String type,int num,double amount)
    {
        name = acc_name;
        acc_type = type;
        acc_num = num;
        money = amount;
    }
    create_account()
    {
        name = "user";
        acc_type = "regular";
        acc_num = 0;
        money =0;
    }
}
class bank
{
    String name,acc_type;
    double money;
    int acc_num;
    bank(String acc_name,String type,int num,double amount)
    {
        name = acc_name;
        acc_type = type;
        acc_num = num;
        money = amount;
    }
    void withdraw()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the amount you want to withdraw :");
        double withdraw_money = sc.nextDouble();
        if(withdraw_money>=0)
        {
            money=money-withdraw_money;
        }
        else
        {
            System.out.println("You have not sufficiant balance");
        }
    }
    void deposit()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the amount you want to deposit :");
        double deposit_money = sc.nextDouble();
        money=money+deposit_money;
        System.out.println(deposit_money+" rupees deposited");
        
    }
    void money_after_charge_permonth()
    {
        double ten_percent = money/10;
        if(ten_percent>50)
        money=(money-50);
        else
        money=(money-ten_percent);
    }
     double show_amount()
    {
        return money;
    }
}

class regular extends bank
{
    String name,acc_type;
    double money;
    int acc_num;
    regular(String acc_name,String type,int num,double amount)
    {
        name = acc_name;
        acc_type = type;
        acc_num = num;
        money = amount;
    }
    void withdraw()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the amount you want to withdraw: ");
        double withdraw_money = sc.nextDouble();
        if(money>=100+withdraw_money)
        {
            money=money-withdraw_money;
            if(money<500)
            money=money-100;
        }
        else
        {
            System.out.println("You have not sufficiant balance");
        }
    }
     double show_amount()
    {
        return money;
    }
}

class interest extends bank
{
    String name,acc_type;
    double money;
    int acc_num;
    interest(String acc_name,String type,int num,double amount)
    {
        name = acc_name;
        acc_type = type;
        acc_num = num;
        money = amount;
    }
    void seven_percent_interest_monthly()
    {
        money = (money + (money*7/100));
    }
     double show_amount()
    {
        return money;
    }
}

class checking extends bank
{
    String name,acc_type;
    double money;
    int acc_num;
    checking(String acc_name,String type,int num,double amount)
    {
        name = acc_name;
        acc_type = type;
        acc_num = num;
        money = amount;
    }
    void withdraw()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the amount you want to withdraw :");
        double withdraw_money = sc.nextDouble();
        if(money>=(withdraw_money+(money/1000)+50))
        {
            money=money-withdraw_money;
            money = money - (money/1000);
            if(money<1000)
            money=money-50;
        }
        else
        {
            System.out.println("You have not sufficiant balance");
        }
    }
    void seven_percent_interest_monthly()
    {
        money = (money + (money*7/100));
    }
    double show_amount()
    {
        return money;
    }
}

class cd extends bank
{
    String name,acc_type;
    double money;
    int acc_num;
    cd(String acc_name,String type,int num,double amount)
    {
        name = acc_name;
        acc_type = type;
        acc_num = num;
        money = amount;
    }
    void fifteen_percent_interest_yearly()
    {
        money = (money + (money*15/100));
    }
    void penalty_before_12month()
    {
        money = money - (money/5);
    }
     double show_amount()
    {
        return money;
    }
}

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        do
        {
            System.out.println("What do you want : ");
            System.out.println("1. create a new account ");
            System.out.println("2. withdraw the money ");
            System.out.println("3. deposit money ");
            System.out.println("4. check balance ");
            System.out.println("5. quit ");
            System.out.print("Enter your choice: ");
            int ch = sc.nextInt();
            String name,type;
            int acc=1234;
            double amount=1000;  
            switch(ch){       //this code is only for one account
                case 1:
                    System.out.print("Enter Your name: ");
                    name = sc.nextLine();
                    System.out.print("Enter type of account: ");
                    type = sc.nextLine();
                    System.out.println("Deposit the initial amount of 1000 in bank, will be added to your account");
                    create_account ca = new create_account(name,type,acc,amount);
                    System.out.println("Account created!!");
                case 2:
                    System.out.print("Enter type of account num: ");
                    int num = sc.nextInt();
                    System.out.print("Enter type of account type: ");
                    String st = sc.nextLine();
                    if(num==acc && st==type)
                    {
                        if(st=="regular")
                        {
                            regular r = new regular(name,type,acc,amount);
                            r.withdraw();
                            amount = r.show_amount();
                        }
                        if(st=="checking ")
                        {
                            checking r = new checking(name,type,acc,amount);
                            r.withdraw();
                            amount = r.show_amount();
                        }
                        if(st=="interest")
                        {
                            interest r = new interest(name,type,acc,amount);
                            r.withdraw();
                            amount = r.show_amount();
                        }
                        if(st=="cd")
                        {
                            cd r = new cd(name,type,acc,amount);
                            r.withdraw();
                            amount = r.show_amount();
                        }
                    }
                    else
                    System.out.println("Invalid account!!");
                case 3:
                    System.out.print("Enter type of account num: ");
                    int num = sc.nextInt();
                    System.out.print("Enter type of account type: ");
                    String st = sc.nextLine();
                    if(num==acc && st==type)
                    {
                        
                            bank r = new bank(name,type,acc,amount);
                            r.deposit();
                            amount = r.show_amount();
                        
                    }
                    else
                    System.out.println("Invalid account!!");
                case 4:
                    System.out.print("Enter type of account num: ");
                    int num = sc.nextInt();
                    System.out.print("Enter type of account type: ");
                    String st = sc.nextLine();
                    if(num==acc && st==type)
                    {
                        System.out.println("Your balance is : "+amount);
                    }
                    else
                    System.out.println("Invalid account!!");
                case 5:
                    break;
            }
        }while(true);
    }
}


