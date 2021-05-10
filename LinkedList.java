class LinkedList{
    Node head;

    class Node{
        int data;
        Node next;
        Node(int d){data = d; next = null;}
    }

    public void PrintList(){
        Node n = head;
        while(n!=null){
            System.out.println(n.data+" ");
            n = n.next;
        }
    }

    public static void main(String[] args){

        LinkedList L = new LinkedList();
        L.head = new Node(1);
        Node secound = new Node(2);
        Node third = new Node(3);
        L.head->next = secound;
        secound.next = third;
        third.next = null;

        L.PrintList();
    }
}