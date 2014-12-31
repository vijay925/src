public class Gradebook2d
{
  private String course_name;
  private int[][] grades;
  
  public Gradebook2d(String course_name, int[][] grades)
  {
    this.course_name = course_name;
    this.grades = grades;
  }
  
  public String getCourseName()
  {
    return course_name;
  }
  
  public void processGrades()
  {
    System.out.printf("Name\t\t\tTest1\tTest2\tTest3\t%n");
    
    for(int i = 0; i < grades.length; i++)
    {
      System.out.printf("Student %d\t\t", i + 1);
      for(int j = 0; j < grades[i].length; j++)
      {
        System.out.printf("%d\t", grades[i][j]);
      } //inner for
      
      System.out.printf("%9.2f%n", getAverage(i));
    } //outer for
  }
  
  public double getAverage(int rowNumber)
  {
    double sum = 0;
    for(int column = 0; column < grades[rowNumber].length; column++)
    {
      sum += grades[rowNumber][column];
    }
    
    return sum/(grades[rowNumber].length);
    
  }
  
  public void random(double... numbers) {}
}