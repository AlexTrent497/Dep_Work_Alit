import java.io.File;
import java.util.ArrayList;
import java.util.List;

public class Scanner {
    
    public Scanner(File file) {
    }
    Scanner scanner = new Scanner(new File("toys.txt"));
    List ids = new ArrayList();
    List names = new ArrayList();
    List frequencies = new ArrayList();
    while (scanner.hasNextLine()) {
    String line = scanner.nextLine();
    String[] tokens = line.split(",");
    ids.add(Integer.parseInt(tokens[0]));
    names.add(tokens[1]);
    frequencies.add(Double.parseDouble(tokens[2]))


    }

            

}









