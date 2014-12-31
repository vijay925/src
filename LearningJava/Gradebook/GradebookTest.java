public class GradebookTest
{
  public static void main(String[] args)
  {
//    int[] gradesArray = {80, 82, 90, 100, 89, 98, 100};
//    Gradebook ecs30 = new Gradebook("ECS30 Intro to C", gradesArray);
//    System.out.printf("The highest score in the gradebook is %d.%n", ecs30.getMax());
//    System.out.printf("The gradebook average is %.2f.%n", ecs30.getAvg());
//    ecs30.outputStudents();
    
    int[][] 
    array = {{1,2,3,4},{1,2,3}};
    
    int[][] array2 = {{1,2,3,4}, {1,43,522}};
    
    for(int i = 0; i < array2.length; i++)
    {
      for(int j = 0; j < array2[i].length; j++)
        System.out.printf("%d\t", array2[i][j]);
    System.out.println();
    }
  }
} // 