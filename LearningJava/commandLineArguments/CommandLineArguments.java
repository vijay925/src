public class CommandLineArguments
{
  public static void main(String[] args)
  {
    for(int i = 0; i < args.length; i++)
      System.out.printf("%s%n", args[i]);
     
    if(args.length != 3)
      System.out.println("CMD line arguments != 3.");
    else
    {
      int arrayLength = Integer.parseInt(args[0]);
      int[] array = new int[arrayLength];
      
      int initialValue = Integer.parseInt(args[1]);
      int increment = Integer.parseInt(args[2]);
            
      for(int i = 0; i < arrayLength; i++)
        array[i] = i; 
    
      for(int i = 0; i < array.length; i++)
        System.out.printf("%d %d%n", i, array[i]);
    }
  }
}