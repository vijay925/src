// public classes can be used across different packages.
// we're just working on project where all the classes are in the same directory
/*
  no constructor provided so the compiler provides one and as soon as the instance is created, 
  the primitive types are set to equivalent of 0
*/

public class Time
{
  private int hour;
  private int minute;
  private int second;
  
  public Time()
  {
     this.hour = 0;
     this.minute = 0;
     this.second = 0; 
  } //default constructor
  
  public Time(int hour, int minute, int second)
  {
    boolean b = validate(hour, minute, second);
    
    if(b)
    {
      this.hour = hour;
      this.minute = minute;
      this.second = second;
    }
  } //constructor if the user provodes values
  
  public void setTime(int hour, int minute, int second)
  {
    boolean b = validate(hour, minute, second);

    if(b)
    {
      this.hour = hour;
      this.minute = minute;
      this.second = second;
    }
  } //set time
  
  public boolean validate(int hour, int minute, int second)
  {
    if(hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59)
      throw new IllegalArgumentException("hour or time or second wwas out of range");
    return true;
  }

  public String toUniversal()
  {
    //return String.format("%02d:%02d:%02d", hour, minute, second);
    return "This is a universal representation";
  } //convert time to Universal
  
  public String toStandard()
  {
    return "This is a standard representation";
  }      
    
}

// make sure to use throw