/*
ListNode* deleteMiddle(ListNode* head) {

        if(head == NULL || head->next == NULL) return NULL;
       
        ListNode* temp = head;
        
        int n = 0;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        int res = n/2;
        temp = head;
        while(temp!=NULL){
            res --;
            if(res==0){
                ListNode* middle = temp->next;
                temp->next = temp->next->next;
                delete middle;
                break;
            }
            temp = temp->next;
        }
        return head;   
    }

    // time complexity: O(n) ~ O(N + N/2
    // space complexity: O(1)
*/

/*

  ListNode* deleteMiddle(ListNode* head) {

         if (head == NULL || head->next == NULL) {
        return NULL;
    }


    ListNode* slow = head;
    ListNode* fast = head;
    fast = head->next->next;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    
    slow->next = slow->next->next;
    return head;
        
    }

    // time complexity: O(n/2)
        // space complexity: O(1)
      
*/