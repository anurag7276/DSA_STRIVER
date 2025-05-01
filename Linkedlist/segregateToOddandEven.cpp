/*
// segregate Nodes of a Linked List into Even and odd  on the basis of values of the nodes.
ListNode *SegregatetoOddEVen()
{
    // creating Heads of Odd and Even LinkedLists
    ListNode *oddHead = new ListNode(-1), *oddTail = oddHead;
    ListNode *evenHead = new ListNode(-1), *evenTail = evenHead;
    ListNode *curr = head, *temp;
    while (curr)
    {
        // Breaking the Link of the curr Node.
        temp = curr;
        curr = curr->next;
        temp->next = nullptr;

        if (temp->val & 1) // If odd Node,append to odd LinkedList
        {
            oddTail->next = temp;
            oddTail = temp;
        }
        else // If Even Node,append to even LinkedList
        {
            evenTail->next = temp;
            evenTail = temp;
        }
    }
    evenTail->next = oddHead->next; 
    // Appending Odd LinkedList at end of EvenLinkedList
    return evenHead->next;
} 
    // time complexity: O(n)
    // space complexity: O(1)
*/


/*

// segregate odd and even nodes in a linked list on the basis of their indices

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
    // time complexity: O(n)
    // space complexity: O(1)

*/
