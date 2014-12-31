public enum Book
{
  JHTP("Java How to Program", "2015"),
  CHTP("C++ How to Program", "2014"),
  MHTP("Math How to Program", "2013"),
  SHTP("Stats How to Program", "2012");
  
  private final String name;
  private final String year;
  
  Book(String name, String year)
  {
    this.name = name;
    this.year = year;
  }
  
  public String getName()
  {
    return name;
  }
  
  public String getYear()
  {
    return year;
  }
}