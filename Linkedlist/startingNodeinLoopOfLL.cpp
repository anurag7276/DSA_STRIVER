/*

Node* detectLoop(Node* head) {
    
    Node* temp = head;
    
    unordered_map<Node*, int> mp;
    
    while(temp!=NULL){
        if(mp.count(temp)!=0){
            return temp;
        }
        mp[temp] = 1;
        temp = temp->next;
    }

    return nullptr; 
}

// time complexity: O(n)
// space complexity: O(n)
*/

/*

 ListNode *detectCycle(ListNode *head) {

        if(head == NULL || head->next == NULL){
        return 0;
      }
    

   
    ListNode* slow = head;  
    ListNode* fast = head;  


    while (fast != NULL && fast->next != NULL) {

        slow = slow->next;        
        fast = fast->next->next;  

        if (slow == fast) {
            slow = head; 
            while (slow != fast) {
                slow = slow->next;  
                fast = fast->next;  
            }
            
            return slow;  
        }
    }
    
    return 0; 

    // time complexity: O(n)
        // space complexity: O(1)


*/