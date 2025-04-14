// this is brute force code to reverse a doubly linked list
// Time complexity: O(2n)
// Space complexity: O(n)
// where n is the number of nodes in the doubly linked list
Node* temp = head;
stack<int> s;
while(temp != NULL){
        s.push(temp->data);
        temp = temp->next;
}
temp = head;
while(temp != NULL){
        temp->data = s.top();
        s.pop();
        temp = temp->next;
}






// optimized code to reverse a doubly linked list
// Time complexity: O(n)
// Space complexity: O(1)
// where n is the number of nodes in the doubly linked list

Node* reverseDll(Node* head){
        if(head == NULL || head->next == NULL) return head;
        Node* prev = NULL;
        Node* current = head;
        while(current!= NULL){
                prev = current->back;
                current->back = current->next;
                current->next = prev;

                current = current->back;
        }
        return prev->back; // return new head of reversed DLL

}