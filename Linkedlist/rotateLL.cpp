// rotate a ll to right direction by k nodes

/*

ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }

        ListNode* temp = head;
        int len = 1;
        while(temp->next != NULL){
            len++ ;
            temp = temp->next;
        }
        temp->next = head;
        k = k % len;
        int end = len - k -1;
        temp = head;
        while(end){
            end--;
            temp = temp->next;
        }
        head = temp->next ;
        temp->next = NULL;

        return head;
        
    }
*/