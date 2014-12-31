import java.util.Arrays;

public class ArrayManipulations
{
  public static void main(String[] args)
  {
    double[] array = {3.4, 11.2,0.32, -5.88, 7.7, 8};
    //Arrays.sort(array);
    
    System.out.println("Sorted array: ");
    
    for(double value: array)
      System.out.printf("%.1f ", value);
    System.out.println();    
    
    int[] fillArray = new int[10];
    Arrays.fill(fillArray, 10);
    displayArray(fillArray, "fillArray");
    
    int[] arrayCopy = new int[fillArray.length];
    System.arraycopy(fillArray, 0, arrayCopy, 0, fillArray.length);
    
    displayArray(arrayCopy, "arrayCopy");
    
    boolean b = Arrays.equals(fillArray, arrayCopy);
    if(b)
      System.out.println("fillArray == arrayCopy");
    else
      System.out.println("fillArray != arrayCopy");
    
    int location = Arrays.binarySearch(array, 8);
    
    System.out.print(location);
    System.out.println();
  }
  
  public static void displayArray(int[] array, String arrayName)
  {
    System.out.printf("%s: ", arrayName);
    
    for(int value: array)
      System.out.print(value + " ");
    System.out.println();
  }
}