//Path interface represents location of a file or directory. doesnt open files or provides file-processing capabilities
//Paths class gives static methods to get Path objects representing file or directory locations
//Files class gives static methods for file and directory manipulations
//DirectoryStream interface to iterate through contents of a directory

import java.io.IOException;
import java.nio.file.DirectoryStream;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.nio.file.Files;
import java.util.Scanner;

public class FilesAndDirectories
{
  public static void main(String[] args) throws IOException
  {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter file or directory name:");
    
    Path path = Paths.get(input.nextLine());
    
    if(Files.exists(path))
    {
      System.out.printf("%n%s exists%n", path.getFileName());
      System.out.printf("%s is a directory%n", Files.isDirectory(path) ? "Is" : "Is not");
      System.out.printf("%s an absolute path%n", path.isAbsolute() ? "Is" : "Is not");
      System.out.printf("Last modified: %s%n", Files.getLastModifiedTime(path));
      System.out.printf("Size = %s%n", Files.size(path));
      System.out.printf("Path = %s%n", path);
      System.out.printf("Absolute path = %s%n", path.toAbsolutePath());
      
      if(Files.isDirectory(path))
      {
        System.out.printf("%nDirectory contents:%n");
        
        DirectoryStream<Path> directoryStream = Files.newDirectoryStream(path);
        
        for(Path p: directoryStream)
          System.out.println(p);
      } //if
    }
    else
    {
      System.out.printf("%s does not exist%n", path);
    } //else
  } 
}
