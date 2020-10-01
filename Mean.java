
import java.util.Scanner;
 class Mean {
 public static void main(String[] args) {
     final Scanner scan = new Scanner(System.in);

     int i;
    int j;
    
     int Median,m;

     float ans=0 ;
     System.out.println("Enter 5 numbers");
     int[] arr = new int[5];
    for(i=0;i<5;i++){
        arr[i] = scan.nextInt();
        ans=ans+arr[i];
    }
    ans = ans/5;
    for(j=0;j<5;j++){
        for(i=0;i<5;i++){
            if(arr[i]>arr[j]){
                m=arr[j];
                arr[j]=arr[i];
                arr[i]=m;
            }
        }
    }
    Median=arr[2];
    System.out.println("Mean of 5 no. is: "+ans);
    
    System.out.println("Median of 5 no. is: "+Median);
    
 }
}