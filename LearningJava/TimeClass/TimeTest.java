// can use this to call member fucntions a well and manipulatre data members
// eg: this.setTime(), this.hour = 10;

// can only declare one private class in one file, the other one has to be non public
// if there is any constructor in your class, the compiler doesnt provide any AT ALL, 
//    so if you want a default, you must create it.

public class TimeTest
{
  public static void main(String[] args)
  {
    Time t1 = new Time();
    Time t2 = new Time(9, 10, 35);
    t2.setTime(10,10,10);
    displayTime("deafult object", t1);
    displayTime("secocond objcts object", t2);
    
    try
    {
      t2.setTime(100,100,100);
    }
    catch(IllegalArgumentException exception)
    {
      System.out.printf("%s%n", exception.getMessage());
    } // can have as many catch statements, eg if setTime threw more than one type of exeption.
    
    System.out.println("Continuing with the program."); 
  }
  
  private static void displayTime(String header, Time timeObject)
  {
    System.out.printf("%s%n", header);
    System.out.printf("%s%n", timeObject.toUniversal());
    System.out.printf("%s%n", timeObject.toStandard());
    
    System.out.println(); 
  }
  
  
}