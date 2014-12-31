public class ConstructorTest
{
  public static void main(String[] args)
  {
    Time born = new Time(12,12,12);
    Time hire = new Time(1, 1, 1);
    Employee e1 = new Employee("Vijay", "Kumar", born, hire);
  }
}
