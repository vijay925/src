public class HourlyEmployee extends Employee
{
  public double wage;
  public double hours;
  
  public HourlyEmployee(String firstName, String lastName, String socialSecurityNumber, double hours, double wage)
  {
    super(firstName, lastName, socialSecurityNumber);
    
    this.hours = hours;
    this.wage = wage;
  }
  
  @Override
  public double earnings()
  {
    return 0;
  }
  
  @Override
  public String toString()
  {
    return String.format("%swage = %.2f%nhours = %.2f%n", super.toString(), wage, hours);
  }
  
}
