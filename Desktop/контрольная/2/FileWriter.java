import java.io.BufferedWriter;
import java.io.IOException;

public class FileWriter {
    public void writeToFile(String filename, Queue queue) throws IOException {
    BufferedWriter bw = new BufferedWriter(new FileWriter(filename));
    for (int i = 0; i < 10; i++) {
        Toy toy = queue.poll();
        bw.write(toy.getId() + "," + toy.getName() + "," + toy.getFrequency() + "n");
    }
    bw.close()
}
}