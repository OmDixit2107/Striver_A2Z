public class basics {
    public static Node constructLL(int[] arr) {
        if (arr == null || arr.length == 0) {
            return null; // Handle empty array case
        }

        Node head = new Node(arr[0]);
        Node temp = head;

        for (int i = 1; i < arr.length; i++) {
            Node newNode = new Node(arr[i]);
            temp.next = newNode;
            temp = newNode;
        }

        return head; // Return the head of the linked list
    }

    public static Node insertAtFirst(Node list, int newValue) {
        Node n = new Node(newValue);
        n.next = list;
        list = n;
        return list;
    }

    public static Node deleteLast(Node list) {
        Node temp = list;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
        return list;
    }

    public static int length(Node head) {
        int c = 0;
        Node temp = head;
        while (temp.next != null) {
            c++;
            temp = temp.next;
        }
        return c + 1;
    }

    public static int searchInLinkedList(Node head, int k) {
        Node temp = head;
        if (temp.data == k)
            return 1;
        int c = 0;
        while (temp.next != null) {
            if (temp.data == k) {
                return 1;
            }
            temp = temp.next;
        }
        if (temp.data == k)
            return 1;
        return c;
    }
}
