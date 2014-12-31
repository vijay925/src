public class CardShufflingTest
{
  public static void main(String[] args)
  {
    //for(int i = 0; i < 52; ++i)
      //System.out.printf("%d / 13 = %d%n", i, i / 13);
    int[] array = {1,2,3,4,5};
    Deck myDeck = new Deck();
    myDeck.shuffle();
    
    for(int i = 1; i <= 52; i++)
    {
      System.out.printf("%-19s\t", myDeck.dealCard());
      
      if((i % 4) == 0)
        System.out.println();
    } //for
  
    int[] testArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int total = 0;
    for(int number : testArray)
      total+= number;
    
    System.out.printf("The sum is %d.%n", total);
    
    //passing arrry passed it as reference.
    // passing a primitive type passes it like a copy of the value.
    
  
  } //main
}