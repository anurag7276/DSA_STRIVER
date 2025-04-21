// tortoise and hare algorithm used 
// to find the middle of a linked list
// 1. if the list is even then return the second middle node
// 2. if the list is odd then return the middle node

/*
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;

        
    }

    // time complexity = O(N/2)
    // space complexity = O(1)
*/