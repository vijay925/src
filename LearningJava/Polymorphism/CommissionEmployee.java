public class CommissionEmployee extends Employee
{
  private double grossSales;
  private double commissionRate;
  
  public CommissionEmployee(String firstName, String lastName, String socialSecurityNumber, 
          double grossSales, double commissionRate)
  {
    super(firstName, lastName, socialSecurityNumber);
    
    this.grossSales = grossSales;
    this.commissionRate = commissionRate;
  }
  
  @Override
  public double earnings()
  {
    return 0;
  }
  
  @Override
  public String toString()
  {
    return String.format("%sgrossSales = %.2f%ncommissionRate = %.2f%n", super.toString(), grossSales, commissionRate);
  }
       
}
