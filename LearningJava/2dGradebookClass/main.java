public class main
{
  public static void main(String[] args)
  {
    int[][] grades = {{90, 90, 90}, {100, 100, 100}};
    
    Gradebook2d gradebook1 = new Gradebook2d("ECS 30", grades);
    System.out.printf("Welcome to %s%n%n", gradebook1.getCourseName());
    gradebook1.processGrades();
  }
  
}