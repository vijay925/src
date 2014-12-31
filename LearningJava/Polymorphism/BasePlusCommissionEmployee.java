public class BasePlusCommissionEmployee extends CommissionEmployee
{
  private double baseSalary;
  
  public BasePlusCommissionEmployee(String firstName, String lastName, String socialSecurityNumber, 
    double grossSales, double commissionRate, double baseSalary)
  {
    super(firstName, lastName, socialSecurityNumber, grossSales, commissionRate);
    
    this.baseSalary = baseSalary;
  }
  
  @Override
  public double earnings()
  {
    return 0;
  }
  
  @Override
  public String toString()
  {
    return String.format("%sbaseSalary = %.2f%n", super.toString(), baseSalary);
  }
 
  
}
