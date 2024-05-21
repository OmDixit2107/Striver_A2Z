import java.util.Stack;

public class Node {
    public int data;
    public Node next;
    public Node prev;

    Node()
    {
        this.data = 0;
        this.next = null;
        this.prev = null;
    }

    Node(int data)
    {
        this.data = data;
        this.next = null;
        this.prev = null;
    }

    Node(int data, Node next)
    {
        this.data = data;
        this.next = next;
        this.prev = next;
    }
};
public class reverseDLL
{
    // stack soln
//    public static Node revDLL(Node head)
//    {
//        Stack<Integer>st=new Stack<>();
//        Node t=head;
//        while(t.next!=null)
//        {
//            st.push(t.data);
//            t=t.next;
//        }
//        Node x =head;
//        while(x.next!=null)
//        {
//            int d=st.peek();
//            x.data=d;
//            st.pop();
//            x=x.next;
//        }
//        return head;
//    }
    public static Node revDLL(Node head)
    {

        Node current =head,last=null;
        if(current.next==null) return current;
        while(current!=null)
        {
            last=current.prev;
            current.prev=current.next;
            current.next=last;
            current=current.prev;
        }
        return last.prev;
    }
}