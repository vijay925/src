public abstract class Employee
{
  private final String firstName;
  private final String lastName;
  private final String socialSecurityNumber;
  
  public Employee(String firstName, String lastName, String socialSecurityNumber)
  {
    this.firstName = firstName;
    this.lastName = lastName;
    this.socialSecurityNumber = socialSecurityNumber;
  }
  
  @Override
  public String toString()
  {
    return String.format("firstName = %s%nlastName = %s%nsocialSecurityNumber = %s%n", 
            firstName, lastName, socialSecurityNumber);
  }
  
  public abstract double earnings();
  
  public String getFirstName()
  {
    return firstName;
  }
  
  public String getLastName()
  {
    return lastName;
  }
    
  public String getSocialSecurityNumber()
  {
    return socialSecurityNumber;
  }
  
  public static void main(String args[])
  {
    BasePlusCommissionEmployee bpc = new BasePlusCommissionEmployee("Vijay", "Kumar", "11-111-111", 10000, 0.5, 300);
    CommissionEmployee ce = new CommissionEmployee("Rick", "Lal", "11-111-111", 10000, 0.5);
    HourlyEmployee he = new HourlyEmployee("Rakesh", "Sharma", "11-111-111", 40, 16.96);
    SalariedEmployee se = new SalariedEmployee("Sachin", "Tendulkar", "11-111-111", 500);
    
    Employee[] employees = new Employee[4];
    employees[0] = bpc;
    employees[1] = ce;
    employees[2] = he;
    employees[3] = se;
    
    for(Employee currentEmployee : employees)
    {
      if(currentEmployee instanceof BasePlusCommissionEmployee)
      {
        System.out.println("This guy is so rich");
        System.out.println(currentEmployee.getClass().getName());
        BasePlusCommissionEmployee temp = (BasePlusCommissionEmployee) currentEmployee;
        //temp.getFirstName();
        System.out.println(currentEmployee);
      } //if
      else 
      {
        System.out.println(currentEmployee.getClass().getName());
        System.out.println(currentEmployee);
      } //else 
    } //for         
  }//main
} //class definition