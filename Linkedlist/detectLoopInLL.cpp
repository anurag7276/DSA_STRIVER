

/*
 bool hasCycle(ListNode *head) {
    
        ListNode* temp = head;  
        
        unordered_map<ListNode*, int> nodeMap;  

        while (temp != nullptr) {
            
            if (nodeMap.find(temp) != nodeMap.end()) {
                return true;
                }
            nodeMap[temp] = 1;
            temp = temp->next;  
        }
        return false;


        
    }

    // time complexity =  O(N * 2 * log(N) )
    The algorithm traverses the linked list once, performing hashmap insertions and searches in the while loop for each node. The insertion and search operations in the unordered_map have a worst-case time complexity of O(log(N)).

    // space complexity = O(N)
*/

/*

bool hasCycle(ListNode *head) {
    
       ListNode* slow = head;
       ListNode* fast = head;

       while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) return true;

       }
       // loop end when linear data structure 
       return false;
        
    }
      // time complexity = O(N)
      // space complexity = O(1)
 
*/