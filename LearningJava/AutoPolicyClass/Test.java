public class Test 
{
  public static void main(String[] args)
  {
    AutoPolicy ob1 = new AutoPolicy(111111, "Toyota Cam", "NY");
    check(ob1);
  }
  
  public static void check(AutoPolicy ob)
  {
    //(ob.isFaultState() ? "is" : "is not"); 
  
    if(ob.isFaultState())
      System.out.println("It is a state");
  }
}


//break and continue 