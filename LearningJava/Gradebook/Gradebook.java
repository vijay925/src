public class Gradebook
{
  private int[] gradesArray;
  private String courseName;
  
  public Gradebook(String courseName, int[] gradesArray)
  {
    this.gradesArray = gradesArray;
    this.courseName = courseName;
  } //constructors
  
  public int getMax()
  {
    int max = gradesArray[0];
    
    for(int grade : gradesArray)
    {
      if(grade > max)
        max = grade;
    } //for
    return max;
  } //getMax
  
  public double getAvg()
  {
    int total = 0;
    for(int grade : gradesArray)
      total+= grade;
    
    return (double)total / gradesArray.length;
  } //getAvg
  
  public void outputStudents()
  {
    for(int student = 0; student < gradesArray.length; ++student)
      System.out.printf("Student %d: %3d.%n", student + 1, gradesArray[student]);
  }
} //class definition