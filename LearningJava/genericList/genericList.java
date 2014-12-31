import java.util.ArrayList;

public class genericList
{
  public static void main(String[] args)
  {
    ArrayList items = new ArrayList<String>();
    items.add("Vijay");
    items.add(0, "Anita");
    
    System.out.println("Printing using controlled loop: ");
    for(int i = 0; i < items.size(); i++)
      System.out.printf("%s%n", items.get(i));
    display(items, "%nPrinting using method: %n");
    items.add("deepi");
    items.add("coolio");
    display(items, "%nPrinting using method: after add%n");
    items.remove("Anita");
    display(items, "%nPrinting using method: after remove Anita%n");
    items.remove(1);
    display(items, "%nPrinting using method: after remove (1)%n");
    
    boolean b = items.contains("Vijay");
    if(b)
      System.out.println("contains Vijay");
  }
  
  public static void display(ArrayList<String> items, String header)
  {
    System.out.printf(header);
    
    for(String item : items)
      System.out.printf("%s%n", item);
    System.out.println(); 
  }
}