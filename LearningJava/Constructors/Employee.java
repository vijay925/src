public class Employee 
{
  private String firstName;
  private String lastName;
  private Time timeOfBirth;
  private Time timeOfHire;
  
  public Employee(String firstName, String lastName, Time TOB, Time TOH)
  {
    this.firstName = firstName;
    this.lastName = lastName;
    this.timeOfBirth = TOB;
    this.timeOfHire = TOH;
    
    System.out.println(this);
  }
  
  public String toString()
  {
    return String.format("Employee object: %s | %s | %s | %s", firstName, lastName, timeOfBirth, timeOfHire);
  }
  
}
