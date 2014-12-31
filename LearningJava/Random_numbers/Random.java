import java.security.SecureRandom;

public class Random
{
  public static void main(String[] args)
  {
    SecureRandom random_numbers = new SecureRandom();
    
    for(int i = 0; i < 20; i++)
      System.out.printf("%d ", 1 + random_numbers.nextInt(6));
    System.out.println(); 
  }
}