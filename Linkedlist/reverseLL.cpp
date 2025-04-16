/*

// Function to reverse a linked list
// using the 3-pointer approach

Node* reverseLinkedList(Node *head)
{
  
   Node* temp = head;  
   Node* prev = NULL;  
   while(temp != NULL){  
      
       Node* front = temp->next;  
       temp->next = prev;  
       prev = temp;  
       temp = front; 
   }
   
   return prev;  
}

*/