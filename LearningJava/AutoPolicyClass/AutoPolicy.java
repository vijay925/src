public class AutoPolicy
{
  private int account_number;
  private String make_of_car;
  private String state;
  
  public AutoPolicy(int account_number, String make_of_car, String state)
  {
    this.account_number = account_number;
    this.make_of_car = make_of_car;
    this.state = state;
  }
  
  public boolean isFaultState()
  {
    switch(state)
    {
      case "MA":
      case "NJ":
      case "NY":
      case "PA":
        return true;
      default:
        return false;
    } 
  }
}
