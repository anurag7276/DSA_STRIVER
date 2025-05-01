/*
class Solution {
public:

    ListNode* reverseLinkedList(ListNode *head)
        {
        
        ListNode* temp = head;  
        ListNode* prev = NULL;  
            while(temp != NULL){  
                
                ListNode* front = temp->next;  
                temp->next = prev;  
                prev = temp;  
                temp = front; 
            }
        
        return prev;  
        }

    ListNode* getKthNode(ListNode* head , int k){
        k -= 1;
        ListNode* KthNode = head;
        while(KthNode != NULL && k>0){
            k--;
            KthNode = KthNode->next;

        }
        return KthNode; 
    }    

    ListNode* reverseKGroup(ListNode* head, int k) {
  
      ListNode* temp = head; 
      ListNode* prevLast = NULL; 

        while(temp != NULL){
    
         ListNode* kThNode = getKthNode(temp, k); 

            if(kThNode == NULL){
            
                if(prevLast){
                    prevLast -> next = temp; 
                }
                
            
                break; 
            }
        
    
          ListNode* nextNode = kThNode -> next; 

        
          kThNode -> next = NULL; 

        
          reverseLinkedList(temp); 
        
      
            if(temp == head){
                head = kThNode;
            }else{
            
                prevLast -> next = kThNode; 
            }

            prevLast = temp; 
            temp = nextNode; 
        }
    
   
     return head; 

           
    }
};

*/

//