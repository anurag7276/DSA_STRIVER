/*

// Function to delete the Nth node
// from the end of the linked list
Node* DeleteNthNodefromEnd(Node* head, int N) {
        if (head == NULL) {
            return NULL;
        }
        int cnt = 0;
        Node* temp = head;
    
        // Count the number of nodes in the linked list
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
    
        // If N equals the total number of
        // nodes, delete the head
        if (cnt == N) {
            Node* newhead = head->next;
            delete (head);
            return newhead;
        }
    
        // Calculate the position of the node to delete (res)
        int res = cnt - N;
        temp = head;
    
        // Traverse to the node just before the one to delete
        while (temp != NULL) {
            res--;
            if (res == 0) {
                break;
            }
            temp = temp->next;
        }
    
        // Delete the Nth node from the end
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete (delNode);
        return head;
    }




 // following are the optimal solution:
 
 // Function to delete the Nth node
// from the end of the linked list
Node* DeleteNthNodefromEnd(Node* head, int N) {
        // Create two pointers, fastp and slowp
        Node* fastp = head;
        Node* slowp = head;
    
        // Move the fastp pointer N nodes ahead
        for (int i = 0; i < N; i++)
            fastp = fastp->next;
    
        // If fastp becomes NULL,
        // the Nth node from the end is the head
        if (fastp == NULL)
            return head->next;
    
        // Move both pointers until fastp reaches the end
        while (fastp->next != NULL) {
            fastp = fastp->next;
            slowp = slowp->next;
        }
    
        // Delete the Nth node from the end
        Node* delNode = slowp->next;
        slowp->next = slowp->next->next;
        delete delNode;
        return head;
    }
    

    */