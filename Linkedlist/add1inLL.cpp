#include<stdlib.h>
using namespace std;
/*
Node* add1inLL(Node* head){
        head = reverse(head);
        temp = head , carry=1;

        while(temp!=NULL){
                temp-> data = temp->data + carry;

                if(temp->data <10){
                carry=0;
                break;
                }
                else{
                temp->data = 0;
                carry = 1;
                }

                temp = temp->next;
        }

         if(carry == 1){
          Node* newNode = new Node(1);
         head = reverse(head);
         newNode->next = head;
         return newNode;
         }

         head = reverse(head);
         return head;

}

// time complexity = O(3N)
// space Complexity = O(1)

*/



/*
  
 int helper(Node* temp){
  if(temp == NULL){
  return 1;
  }

  carry = helper(temp->next);
  temp->data = temp->data + carry; 

  if(temp->data < 10) return 0;
  temp->data = 0;
  return 1;

 
 }

 Node* add1inLL(Node* head){
   carry = helper(head);

   if(carry == 1){
     newNode = new Node(1);
     newNode->next = head;
     return newNode;
   }

   return head;
 }


 // time complexity = O(N)
// space Complexity = O(N)


*/
