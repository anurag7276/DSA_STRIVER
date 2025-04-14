// this is a C++ program to add two numbers represented by linked lists.
// The numbers are stored in reverse order, meaning that the 1's digit is at the head of the list.
// The program adds the two numbers and returns the sum as a linked list in the same reverse order.
// The program uses a dummy head node to simplify the process of adding nodes to the result list.
// It also handles the case where the sum of the two numbers has an extra carry at the end.
// The program uses a while loop to iterate through both linked lists, adding the corresponding digits and carrying over any overflow to the next digit.
class Solution {
        public:
            ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
               ListNode* dummyHead = new ListNode(-1);
                ListNode* curr = dummyHead;
                ListNode* temp1 = l1;
                ListNode* temp2 = l2;
        
                int carry = 0;
                while(temp1 !=NULL || temp2 !=NULL){
                    int sum = carry;
                    if(temp1) sum += temp1->val;
                    if(temp2) sum+= temp2->val;
        
                    ListNode* newNode = new ListNode (sum%10);
                    carry = sum/10;
        
                    curr->next = newNode ;
                    curr = curr->next;
        
                    if(temp1) temp1 = temp1->next;
                    if(temp2) temp2 = temp2->next;
                }
        
                if(carry){
                    ListNode* newNode = new ListNode (carry);
                    curr->next = newNode;
                }
        
                return dummyHead->next;
            }
        };