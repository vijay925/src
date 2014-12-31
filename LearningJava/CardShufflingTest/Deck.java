import java.security.SecureRandom;

public class Deck
{
  //static variables
  private static final int NUMBER_OF_CARDS = 52;
  private static final SecureRandom randomNumber = new SecureRandom();
  private static final String[] faces = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", 
                                         "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
  private static final String[] suits = {"Hearts", "Diamonds", "Clubs", "Spades"};
  
  //instance variables
  private Card[] deck;
  private int currentCard;
  
  public Deck()
  {
    
    deck = new Card[NUMBER_OF_CARDS];
    currentCard = 0;
    
    for(int i = 0; i < deck.length; ++i)
    {
      deck[i] = new Card(faces[i % 13], suits[i / 13]); 
    } //for
  } //constructor
  
  public void shuffle()
  {
    for(int first = 0; first < deck.length; ++first)
    {
      int second = randomNumber.nextInt(NUMBER_OF_CARDS);
      
      Card temp = deck[first];
      deck[first] = deck[second];
      deck[second] = temp;
    } //for
  } //shuffle
  
  public Card dealCard()
  {
    if(currentCard < deck.length)
      return deck[currentCard++];
    return null;
  }
} //class definition