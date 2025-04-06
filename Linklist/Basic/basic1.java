class Node{
        int data;
        Node next;

        Node(int data1 ){
               this.data = data1;
                this.next = next1;
        }
     
        Node(int data1 ){
                this.data = data1;
                this.next = null;
        }
                
};

public class Linkedlist{
        public static void main( String[] args){
                int arr[]={2,4,6,7};
                Node y = new Node (arr[1], null);
                System.out.print(y.data)
        }
}