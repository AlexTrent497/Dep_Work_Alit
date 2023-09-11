class Node {
    int val;
    Node next;

    public Node(int val) {
        this.val = val;
    }
}

class Answer {
    public void reverse() {
      // Введите свое решение ниже
          extension SinglyLinkedList {
    
    func reverseRecursively() {
        func reverse(_ node: Node<T>?) -> Node<T>? {
            guard let head = node else { return node }
            if head.nextNode == nil { return head }
            
            let reversedHead = reverse(head.nextNode)
            head.nextNode?.nextNode = head
            head.nextNode = nil
            
            return reversedHead
        }
        
        firstNode = reverse(firstNode)
    }
    
}     

//В данной реализации метода reverse используется алгоритм, известны
 return head
 
 prev = None
 current = head
 
 while current is not None:
 next_node = current.next
 current.next = prev
 prev = current
 current = next_node
 
 head = prev
 
 return head
//В данной реализации метода reverse используется алгоритм, известны

}
}

public class Printer {
    public static void main(String[] args) {
        // Создаем связанный список 1 -> 2 -> 3 -> 4
        Node head;
        if (args.length == 0) {
            head = new Node(1);
            head.next = new Node(2);
            head.next.next = new Node(3);
            head.next.next.next = new Node(4);
        } else {
            head = new Node(Integer.parseInt(args[0]));
            head.next = new Node(Integer.parseInt(args[1]));
            head.next.next = new Node(Integer.parseInt(args[2]));
            head.next.next.next = new Node(Integer.parseInt(args[3]));
        }

        // Сохраняем голову списка в поле класса Answer
        Answer ans = new Answer();
        ans.head = head;
        // Инвертируем порядок элементов списка
        ans.reverse();

        // Выводим инвертированный порядок элементов списка
        Node current = ans.head;
        while (current != null) {
            System.out.print(current.val + " ");
            current = current.next;
        }
    }
}

