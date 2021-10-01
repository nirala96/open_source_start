class Main {
  public static void main(String[] args) {
    int number = 12;
    
    // Create a control flow according to the result of number % 3
    switch (number%3){
      case 0:
        System.out.println("Divisible by 3");
        break;
     
    case 1:
      System.out.println("Remainder is 1 when divided by 3");
      break;
    
    case 2:
      System.out.println("Remainder is 2 when divided by 3");
      break;
    }
  }
}

//switchStatement
