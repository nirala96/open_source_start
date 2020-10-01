class Main {
  public static void main(String[] args) {
    Person person1 = new Person("Kate", "Jones", 27, 1.6, 50.0);
    person1.printData();
    Person person2 = new Person("John", "Christopher", "Smith", 65, 1.75, 80.0);
    person2.printData();
    
    System.out.println("----------------------");
    // Call the getMiddleName instance method using the person2 instance
    // and output "The middle name of person2 is ____."
    person2.getMiddleName();
    System.out.println("The middle name of person2 is " + person2.getMiddleName() + ".");
    
  }
}


class Person {
  private static int count = 0;
  private String firstName;
  private String middleName;
  private String lastName;
  private int age;
  private double height, weight;

  Person(String firstName, String lastName, int age, double height, double weight) {
    Person.count++;
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
    this.height = height;
    this.weight = weight;
  }
  
  Person(String firstName, String middleName, String lastName, int age, double height, double weight) {
    this(firstName, lastName, age, height, weight);
    this.middleName = middleName;
  }

  // Define the getter for middleName instance field
  public String getMiddleName(){
    return this.middleName;
  }

  public String fullName() {
    if (this.middleName == null) {
      return this.firstName + " " + this.lastName;
    } else {
      return this.firstName + " " + this.middleName + " " + this.lastName;
    }
  }

  public void printData() {
    System.out.println("My name is " + this.fullName() + ".");
    System.out.println("I am " + this.age + " years old.");
    System.out.println("My BMI is " + Math.round(this.bmi()) + ".");
  }

  public double bmi() {
    return this.weight / this.height / this.height;
  }

  public static void printCount() {
    System.out.println("Total: " + Person.count + " people.");
  }
}

