import java.util.Scanner;

public class Methods
{
  public static void main(String[] args)
  {
    Scanner input = new Scanner(System.in);
    System.out.print("Enter 3 numbers: ");
    int a = input.nextInt();
    int b = input.nextInt();
    int c = input.nextInt();

    System.out.println("The sum is " + sum(a, b, c)); 
  }
  
  public static int sum(int a, int b, int c)
  {
    return a+b+c;
  }
  
}

// static methods and static variables. class only has one copy for all objects
// call other static members by classname.variable/function_name
// Math.PI
// public, final and static (Math.PI is defined as public final and static)
