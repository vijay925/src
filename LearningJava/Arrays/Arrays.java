public class Arrays
{
  public static void main(String[] args)
  {
    int array[] = new int[10];
    
    //for(int i = 0; i < 100; i++)
       //System.out.printf("index = %d, vlaue = %d%n", i, array[i]);
    
    try
    {
      array[15] = 10;
    }
    catch(ArrayIndexOutOfBoundsException e)
    {
      System.out.println(e);
    }
    
  } //main
}