
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = nullptr;
    }
    ListNode(int data1)
    {
        val = data1;
        next = nullptr;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};

// 0, 1, 2 linked list sort
class Solution {
        public:
            ListNode *sortList(ListNode *head) {
                if(!head || !head->next) return head;
                ListNode* zeroHead = new ListNode(-1);
                ListNode* oneHead = new ListNode(-1);
                ListNode* twoHead = new ListNode(-1);
        
                ListNode* zero = zeroHead;
                ListNode* one = oneHead;
                ListNode* two = twoHead;
        
                ListNode* temp = head;
        
                while(temp){
                    if(temp->val == 0){
                        zero->next = temp;
                        zero = temp;
                    }
                    else if(temp->val == 1){
                        one->next = temp;
                        one = one->next;
                    }
                    else{
                        two->next = temp;
                        two = temp;
                    }
                    temp = temp->next;
                }
        
                zero->next = (oneHead->next)? (oneHead->next):(twoHead->next);
                one->next = twoHead->next;
                two->next = nullptr;
                ListNode* newHead = zeroHead->next;
        
                delete zeroHead;
                delete oneHead;
                delete twoHead;
        
                return newHead;
        
        
            }
        };