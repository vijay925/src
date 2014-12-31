public class SalariedEmployee extends Employee
{
  private double weeklySalary;
  
  public SalariedEmployee(String firstName, String lastName, String socialSecutiryNumber, double weeklySalary)
  {
    super(firstName, lastName, socialSecutiryNumber);
    
    if(weeklySalary < 0)
      throw new IllegalArgumentException("Weekly salary must be > 0.");
    
    this.weeklySalary = weeklySalary;
  }
  
  @Override
  public double earnings()
  {
    return weeklySalary;
  }
  
  @Override
  public String toString()
  {
    return String.format("%sweeklySalary = %.2f%n", super.toString(), weeklySalary);
  }
}