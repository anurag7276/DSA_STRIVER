// segregate odd and even node in linkedlist
// here is pseudocode of the problem

Node* segregate_odd_even_Node(*head){
        if(head== NULL || head->next ==NULL){
                return head;
        }
        
        odd= head;
        even = head->next;
        evenHead = head->next;
        
        while(even != NULL || even->next == NULL){
                odd->next = odd->next->next;
                even->next = even->next->next;
        
                odd= odd->next;
                even= even->next->next;
        
        
        }
        odd->next = evenHead;
        return head;
        
}