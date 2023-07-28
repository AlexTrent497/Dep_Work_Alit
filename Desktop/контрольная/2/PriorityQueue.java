import java.util.Comparator;

public class PriorityQueue {
    public PriorityQueue(int size, Comparator<Toy> comparingDouble) {
    }
    PriorityQueue toysQueue = new PriorityQueue(frequencies.size(),
    Comparator.comparingDouble(Toy::getFrequency));
    for (int i = 0; i < frequencies.size(); i++) {
    Toy toy = new Toy(ids.get(i), names.get(i), frequencies.get(i));
    toysQueue.add(toy);
    


    }
}