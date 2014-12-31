/*
public class Test
{
  public static void main(String[] args)
  {
    String name = "Vijay";
    //System.out.print("Welcome ");
    //System.out.println("to Java Coding!\n");
    System.out.printf("My name is %s%n", name);         //%n for portability
}

String, System etc are part of java.lang package
*/

/*
import java.util.Scanner;
//import java.util.*;     import all the object names in util class

public class Test
{
  public static void main(String[] args)
  {
    Scanner input = new Scanner(System.in);
    
    System.out.print("Enter first number: ");
    int first = input.nextInt();
    
    System.out.print("Enter second number: ");
    int second = input.nextInt();
    
    System.out.printf("The sum is: %d.\n", first + second);
    
    //if statements can only take boolean values. 
    if(true) 
      System.out.print("Shit\n");    
  } 
}
*/

/*

boolean = true and false; initial value is false.
byte = 1 byte integer
char = 2 byte integers -> only positive values
short = 2 bytes
int -> 4 byte int
long -> 8 byte int
float, double -> 4 and 8 byte decimal
class Double, Float

(double) total/ 10;
*/

//c++
//++c

//%-,20.2f
//Math.pow()

// private static int count  = 0;
//public static int getCount() {return count;} 
//count++ in the constructor
// Employee e1 = new Emplopyee("VJ", "Kumar")
//provide static public methods to give acess to static variable


//inheritance
// only single inherritance in Java
//Object is the super class of everything in Java
// public class Craps extends Object
//@Override

//cant access private data that has been inherited
//just add additional data members in subclass
//make sure to invoke sub class constructor
//if you have a constructor, the compiler no longer provides a default one
//can only implicitly invoke super class's default constructor

/*
constructor(...)
{
  super(var1, var2,...);
  ...;
}
*/

//protected members are inherited as protected members
//super.earnings();

/*
@Override
public String toString()
{
  return String.format("%s", super.toString());
}
*/

/*
CommissionEmployee e1 = baseCommissionsEmployeeObject;
`e1.toString() invokes the base class's toString method because it

*/

//abstract classes (too general but used to create a hierarchy, ie a Shape class)
//virtual f(x) - can override or not
//abstract f(x)- have to be overridden
//concrete classes must override all functions
//constructors and non-private static methods cant be overridden

/*
  public abstract double earnings();
*/

// To get polymorphism use super class variables and point to subclasses or INTERFACES

/*
Need to downcast if you have a super class reference and you wish to invoke base class specific functionality.

ie. invoking currentEmployee.setBaseSalary();
Employee class has no idea about what setbasesalary is

However, earnings is definied as a abstarct method so it doesnt need downcasting

*/

/*
  dont call overridable methods from the constructor
  ok to call static or final methods
  private/static methods are implicitly final
  final classes cannot be extended and all methods are implicitly final

  final classes can be used for security purposes
*/