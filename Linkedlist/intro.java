package Linkedlist;
class Node{
    int data;
    Node next;
    Node(int data)
    {
        this.data=data;
        next=null;
    }
}
public class intro {
    public static void display(Node head)
    {
        Node temp = head;
        while (temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
    public static void displayr(Node head)
    {
        if (head==null) return;
        System.out.print(head.data+" ");
        display(head.next);
    }
    public static int length(Node head)
    {
        int c=0;
        Node temp = head;
        while (temp!=null)
        {
            //System.out.print(temp.data+" ");
            c++;
            temp=temp.next;
        }
        return c;
    }
    public static void main(String[] args) {
        Node n1 = new Node(2);
        Node n2 = new Node(4);
        Node n3 = new Node(5);
        Node n4 = new Node(6);
        Node n5 = new Node(8);


        n1.next=n2;
        n2.next=n3;
        n3.next=n4;
        n4.next=n5;
        Node temp = n1;
       display(n1);
        System.out.println();
        displayr(n1);
        System.out.println();
        System.out.println(length(n1));
    }
}
