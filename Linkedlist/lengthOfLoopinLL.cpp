/*


int lengthOfLoop(Node* head) {
    
    unordered_map<Node*, int> visitedNodes; 

    Node* temp = head; 
    
    int timer = 0; 

    while (temp != NULL) {
        if (visitedNodes.find(temp) != visitedNodes.end()) {
            int loopLength = timer - visitedNodes[temp];
            return loopLength; 
        }
        visitedNodes[temp] = timer;
        temp = temp->next;
        timer++;
    }

    return 0;
}

// time complexity: O(n)
// space complexity: O(n)
// brute force approach

*/

/*

int findLength(Node* slow, Node* fast){
    
   
    int cnt = 1;
    fast = fast->next;
    while(slow!=fast){
        
        cnt++;
        fast = fast->next;
    }
    

    return cnt;
}

int lengthOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;     
        fast = fast->next->next;
        if (slow == fast) {
            
            return findLength(slow, fast);
        }
    }


    return 0; 
}
// time complexity: O(n)
// space complexity: O(1)
// optimized approach using Floyd's Tortoise and Hare algorithm

*/