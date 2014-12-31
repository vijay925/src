import java.util.EnumSet;

public class BookTest
{
  public static void main(String[] args)
  {
    System.out.println("All books:");
    
    //print all
    for(Book book : Book.values())     
      System.out.printf("%s %s %s%n", book, book.getName(), book.getYear());
    System.out.println();
    
    //print a range
    for(Book book : EnumSet.range(Book.JHTP, Book.MHTP))
      System.out.printf("%s %s %s%n", book, book.getName(), book.getYear());
    System.out.println();
  } //main
}
