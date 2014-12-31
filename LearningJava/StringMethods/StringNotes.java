public class StringNotes 
{
  public static void main(String[] args) 
  {
    
    char[] charArray = {'V', 'i', 'j', 'a', 'y'};
    String s = new String("Hello");
    String x = "Hello there";
    
    String s1 = new String();
    String s2 = new String(s);
    String s3 = new String(charArray);
    String s4 = new String(charArray, 6, 3);
    
    //s1.length();   // differnt from array.length
    //s1.charAt(index)      //access an element
    //s1.getChars(srcBegin, srcEnd, charArray, dstBegin);  //copy from String to charArray
    
    // if(s1.equals("hello"))
    // if(s1 == "hello")           does reference comparison
    // s1.compareTo(s3)         (s1 < s2: -) (s1 > s2: +) (s1 == s2: 0)    returns difference   
    
    //capital letters have lower values than the uppercase values
    
    // if(s3.regionMatches(0, s4, 0, 5))      compares first 5 chars - case sensitive 
    // if(s3.regionMatches(true, 0, s4, 0, 5))   compares first 5 chars - not case sensitive 
    
    // if(s1.startsWith("st")) checks for substrings
    // if(s1.startsWith("art", 2)) checks for substrings
    // if(s1.endsWith(ed))
    
    //s1.indexOf('a')      returns index of character 'a' in the s1 string. returns -1 if not found
    //s1.indexOf('a', 1)
    //s1.lastIndexOf('a')  searches from the end
    //s1.lastIndexOf('a', 25)  searches from the end from a given index
    //s1.indexOf("substring")
    
    //s1.substring(20);
    //s1.substring(3,6)  //substring form index to 3 uptp 6 but not including 6
    
    //s1.concat(s2)    created a new string that is s1+s2. 
    
    //s1.replace('l', 'L')
    //s1.toUpperCase()
    //s1.toLowerCase()
    //s1.trim()
    //char[] charArray = s1.toCharArray()    //String to char[]
    
    //String.valueOf(booleanValue)  retunrs string representation of int,double,char[] etc. calls toString()
    
    /*
    StringBuilder buffer1 = new StringBuilder();    //Strings that can be modified
    StringBuilder buffer1 = new StringBuilder("hello");
    
    buffer1.toString()
    buffer1.length()
    buffer1.capacity()
    buffer1.ensureCapacity(75)
    buffer1.setLenght(10)  truncates the length to 10. doesnt change what the capacity is
    
    buffer1.charAt(0)
    buffer1.getChars(0, buffer.length(), charArray, 0)      copy characters to char array
    buffer1.setCharAt(0, 'H')
    buffer1.reverse()
    
    buffer.append(objectRef)
          .append("\n")
          .append(charArray, 0, 3)
          .append(integerValue);
    
    buffer.insert(0, objRef)
          .insert(0, "  ")
          .insert(0, integerValue);
    
    buffer.deleteCharAt(10)
    buffer.delete(2, 6)
    */
    
    /*
    Scanner scanner = new Scanner(System.in)
    String input = scanner.next();
    char c = input.charAt(0)
    Character.isDefined(c)
    Character.isDigit(c)
    Character.isJavaIdentifierStart(c)
    Character.isJavaIdentifierPart(c)
    Character.isLetter(c)
    Character.isLetterOrDigit
    Character.isLowerCase(c)
    Character.isUpperCase(c)
    Character.toUpperCase(c)
    Character.toLowerCase(c)
    */
    
    /*  Characters to digits
    int choice = scanner.nextInt();
    Character.digit(character, radix)      character to digit
    Character.forDigit(digit, radix)        digit to character
    
    */
    
    /*  Charcter class
    Character c1 = 'A'
    c1.charValue()
    
    if(c1.equals(c2))   compares chars
    */
    
    /*
    String sentence = scanner.nextLine()
    String[] tokens = sentence.split(" ")
    
    */
  }
  
}
