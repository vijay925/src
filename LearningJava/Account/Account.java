public class Account
{
  private String name;
  private double balance;
  
  public Account(String initial_name, double balance)
  {  
    setName(initial_name);
    if(balance > 0)
      this.balance = balance;
  }
  
  public void deposit(double amount)
  {
    if(amount > 0)
      balance += amount;
  }
  
  public String getName()
  {
    return name;
  }
  
  public void setName(String name)
  {
    this.name = name;
  }
  
  public double getBalance()
  {
    return balance;
  }
}