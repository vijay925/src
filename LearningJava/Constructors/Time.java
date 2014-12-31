public class Time
{
  private int hour;
  private int minute;
  private int second;
  
  public Time()
  {
    this(0,0,0);
  }
  
  public Time(int hour)
  {
    this(hour, 0, 0);
  }
  
  public Time(int hour, int minute)
  {
    this(hour, minute, 0);
  }
  
  public Time(int hour, int minute, int second)
  {
    if(hour < 0 || hour >= 24)
      throw new IllegalArgumentException("hour must be 0-23.");
    if(minute < 0 || minute >= 60)
      throw new IllegalArgumentException("minute must be 0-60.");
    if(second < 0 || second >= 60)
      throw new IllegalArgumentException("second must be 0-60.");
    
    this.hour = hour;
    this.minute = minute;
    this.second = second;
    
    System.out.println(this);
  }

   public String toString()
   {
     return String.format("Time object: %s/%s/%s", hour, minute, second);
   }
}