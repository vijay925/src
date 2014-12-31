public class Array
{
  public static void main(String[] args)
  {
    final int length = 10;
    int[] array = new int[length];
    int[] array2 = {1,2,3,4,5,6,7,8};
    
    System.out.println("Index  Value");
    for(int i = 0; i < array2.length; i++)
      System.out.printf("%d  %8d%n", i, array2[i]);
  }
}