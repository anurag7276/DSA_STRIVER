/*
node* intersectionPresent(node* head1,node* head2) {
     unordered_set<node*> st;
    while(head1 != NULL) {
       st.insert(head1);
       head1 = head1->next;
    }
    while(head2 != NULL) {
        if(st.find(head2) != st.end()) return head2;
        head2 = head2->next;
    }
    return NULL;

}
    // time complexity = O(N )+O(M ) = O(N+M)  // because we are using a set for storing the nodes of list1
    // space complexity = O(N)

*/

/*

  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

     if(headA == NULL || headB == NULL) return NULL;
     ListNode* temp1 = headA;
     ListNode* temp2 = headB;

     while(temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;

        if(temp1 == temp2) return temp1;

        if(temp1 == NULL) temp1 = headB;
        if(temp2 == NULL) temp2 = headA;

     }
     return temp1; // if temp1 and temp2 is equal at first node means head node 
    
    }

    // time complexity = O(N+M)
    // space complexity = O(1)
*/