import java.security.SecureRandom;

public class Craps
{
  private enum Status {CONTINUE, WON, LOST};
  private static final SecureRandom randomNumbers = new SecureRandom();
  //private static final int x;
  public static void main(String[] args)
  {
    int myPoint = 0;
    Status gameStatus;
    int sum = 0;

    sum = rollDice();

    switch(sum)
    {
      case 7: case 11:
        gameStatus = Status.WON;
        System.out.println("You won.");
        break;
      case 2: case 3: case 12:
        gameStatus = Status.LOST;
        System.out.println("You lost.");
        break;
      default:
        gameStatus = Status.CONTINUE;
        myPoint = sum;
        System.out.printf("Point is: %d.%n", myPoint);
        break;
    } //
    
    if(gameStatus == Status.CONTINUE)
    {
      while(gameStatus == Status.CONTINUE)
      {
        sum = rollDice();
        if(sum == 7)
        {
          gameStatus = Status.LOST;
          System.out.println("You lost.");
        }
        else if(sum == myPoint)
        {
          gameStatus = Status.WON;
          System.out.println("You won."); 
        }
      } //while
    } //else if 
   } //main

  public static int rollDice()
  {
    int dice1 = 1 + randomNumbers.nextInt(6);
    int dice2 = 1 + randomNumbers.nextInt(6);
    System.out.printf("You have rolled a %d and %d = %d.%n", dice1, dice2, dice1 + dice2);
    
    return dice1 + dice2;
  }
}

// Static functions can only call static functions ie main calling another main
// Only static functions can access static data. static function called foo can do static x = 10;
// function overloading: can overload constructors, static functions and member function