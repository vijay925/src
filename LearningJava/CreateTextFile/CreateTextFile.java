import java.io.FileNotFoundException;
import java.lang.SecurityException;
import java.util.Formatter;
import java.util.FormatterClosedException;
import java.util.NoSuchElementException;
import java.util.Scanner;

public class CreateTextFile 
{
  private static Formatter output;
  
  public static void main(String[] args) 
  {
    openFile();
    addRecords();
    closeFile();
  } //main
  
  public static void openFile()
  {
    try
    {
      output = new Formatter("clients.txt");
    }
    catch(SecurityException securityException)
    {
      System.err.println("Write permission denied. Terminating.");
      System.exit(1);
    }
    catch(FileNotFoundException fileNotFoundException)
    {
      System.err.println("Error opening file. Terminating");
      System.exit(1);
    }
  } //open file
  
  public static void addRecords()
  {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter acc#, fName, lName, balance");
    System.out.print("? ");
    
    while(input.hasNext())  //eof
    {
      try
      {
        output.format("%d %s %s %.2f%n", input.nextInt(), input.next(), input.next(), input.nextDouble());
      }
      catch(FormatterClosedException formatterClosedException)
      {
        System.err.println("Error writing to file. Terminating");
        break;
      }
      catch(NoSuchElementException noSuchElementException)
      {
        System.err.println("Invalid input. Please try again.");
        input.nextLine();
      }
      
      System.out.print("? ");
    } //while
  }// addRecords()
  
  public static void closeFile()
  {
    if(output != null)
      output.close();
  } //closeFile
  
}
