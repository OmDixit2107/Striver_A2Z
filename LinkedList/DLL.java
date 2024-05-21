class Node {
    public int data;
    public Node next;
    public Node back;

    Node() {
        this.data = 0;
        this.next = null;
        this.back = null;
    }

    Node(int data) {
        this.data = data;
        this.next = null;
        this.back = null;
    }

    Node(int data, Node next) {
        this.data = data;
        this.next = next;
        this.back = null;
    }

    Node(int data, Node next, Node back) {
        this.data = data;
        this.next = next;
        this.back = back;
    }
}

public class DLL {
    public static Node constructDLL(int[] arr) {
        if (arr == null || arr.length == 0) {
            return null; // Handle empty array case
        }

        Node head = new Node(arr[0]);
        Node temp = head;

        for (int i = 1; i < arr.length; i++) {
            Node newNode = new Node(arr[i], null, temp);
            temp.next = newNode;
            temp = newNode;
        }

        return head; // Return the head of the linked list
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        Node head = constructDLL(arr);

        // Print the linked list elements
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
        // System.out.println(head.data);
    }
}
