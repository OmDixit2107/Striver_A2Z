package Linkedlist;

public class implementation {
    public static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            next=null;
        }
    }
    public static class linkedlist{
        Node head=null;
        Node tail=null;
        int size=0;
        void insertatend(int val)
        {
            Node temp = new Node(val);
            if (head==null)
            {
                head=temp;
            }
            else {
                tail.next = temp;
            }
            tail=temp;
            size++;
        }

        void display()
        {
            Node temp=head;
            while (temp!=null)
            {
                System.out.print(temp.data+" ");
                temp=temp.next;
            }
            System.out.println();
        }
        int size() // O(N)
        {
            int c=0;
            Node temp=head;
            while (temp!=null)
            {
                c++;
                temp=temp.next;
            }
            return c;
        }
        void insertathead(int val)
        {
            Node temp = new Node(val);
            if (head==null)
            {
                head=temp;
                tail=temp;
            }
            else {
                temp.next=head;
                head=temp;
            }
            size++;
        }
        void insertatindex(int val,int index)
        {
            if (index==0)
            {
                insertathead(val);
            }
            if (index==size())
            {
                insertatend(val);
            }
            Node temp=head;
            for (int i = 0; i < index-1; i++) {
                temp=temp.next;
            }
            Node n = new Node(val);
            n.next=temp.next;
            temp.next=n;
            size++;
        }
        int getat(int index)
        {
            Node temp=head;
            for (int i = 0; i < index; i++) {
                temp=temp.next;
            }
            return temp.data;
        }
        void deleteatidx(int index)
        {
            Node temp=head;
            for (int i = 0; i < index-1; i++) {
                temp=temp.next;
            }
            temp.next=temp.next.next;
            size--;
        }
    }
    public static void main(String[] args) {
        linkedlist ll = new linkedlist();
        ll.insertatend(5);
        ll.insertatend(10);
        ll.display();
        //System.out.println();
        System.out.println(ll.size());
        ll.insertathead(1);
        ll.display();
        System.out.println(ll.size());
        ll.insertatindex(2,1);
        ll.display();
        System.out.println(ll.getat(1));
        ll.deleteatidx(2);
        ll.display();
    }
}
