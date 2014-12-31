import java.util.Scanner;

public class Main 
{
  public static void main(String[] args)
  {
    Scanner input = new Scanner(System.in);
    Account myAccount = new Account("Vijay", 19000);
    
    System.out.printf("The name in the object is: %s.%n", myAccount.getName());
    System.out.printf("Your balance is: %.2f.%n", myAccount.getBalance());
    
    System.out.print("Enter a name: ");
    String nameEntered = input.nextLine();
    myAccount.setName(nameEntered);
    
    System.out.print("Enter amount to deposit: ");
    double amount = input.nextDouble();
    myAccount.deposit(amount);
    
    System.out.printf("The name in the object is: %s.%n", myAccount.getName());
    System.out.printf("Your balance is: %.2f.%n", myAccount.getBalance());
  }
}

/*
if(amount > 0)
  if(amount < 100)
    this.amount = amount;


if()
else if()
else


while(cunter <= 10)
{
  total += ....
}

while(grade != -1)
{

}

do
{
} while();


*/