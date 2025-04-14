#include<bits/stdc++.h>
using namespace std;

// self defined data type
class Node{
        public:
        int data;
        Node* next;

        public:
        Node(int data1 , Node* next1){
                data = data1;
                next = next1;
        }
        public:
        Node(int data1 ){
                data = data1;
                next = nullptr;
        }
                
};


/*****************************************************DELETION OF LINKEDLIST OF VARIOUS WAYS ***************************************/


// Converting array to Linkedlist
Node* ConverArr2ll(vector<int> &arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;

        for(int i=1; i<arr.size(); i++){
                Node* temp = new Node(arr[i]);
                mover->next = temp;
                mover = mover->next;

        }
        return head;

}

// print linkedlist
void print (Node* head){
        Node* temp = head;
        while(temp){
                cout<<temp->data<<" ";
                temp = temp->next;
        }
}

// function for remove head node and return new linlkedlist
Node* removeHead(Node* head){
        if(head == NULL) return head;
        Node* temp = head;
        head= head->next;
        delete temp;
        return head ;
}

// removes tail node meaans last node of linkedlist
Node* removeTail(Node*head){
        if(head==NULL || head->next == NULL) return NULL;
        Node* temp = head;
        while(temp->next->next != NULL){
                temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;

        return head;

}

// remove Node of Kth position
Node* removeK (Node* head , int k){
        if(head==NULL) return NULL;

        if(k==1){
                Node* temp = head;
                head = head->next ;
                free(temp);
                return head;
        }

        int cnt = 0;
        Node* temp = head;
        Node* prev= NULL;
        while(temp!=NULL){
                cnt++;
                if(cnt == k){
                        prev->next = prev->next->next;
                        free(temp);
                        break;

                }

                prev = temp;
                temp= temp->next;

        }

        return head;
}

// remove node of given value 
Node* removeEle (Node* head , int ele){
        if(head==NULL) return NULL;

        if(head->data == ele){
                Node* temp = head;
                head = head->next ;
                free(temp);
                return head;
        }

        Node* temp = head;
        Node* prev= NULL;
        while(temp!=NULL){
               
                if(temp->data==ele){
                        prev->next = prev->next->next;
                        free(temp);
                        break;
                }
                prev = temp;
                temp= temp->next;

        }
        return head;
}






/*****************************************************INSERTION OF LINKEDLIST OF VARIOUS WAYS *******************************/



Node* insertHead(Node* head , int val){
        Node* temp = new Node( val , head);
        return temp;
}

Node* insertTail(Node* head, int val){
 if(head== NULL){
        return new Node (val);
 }

 Node* temp = head;
 while(temp->next!=NULL){
        temp = temp->next;       
 }
 Node* newNode = new Node( val);
 temp->next = newNode;
 return head;

}

Node* insertPosition(Node* head , int el, int k){
        if( head== NULL){
                if(k==1){
                        return new Node(el);
                }
                else{
                        return head;
                }
        }

        if(k==1){
                return new Node(el, head);
        }
        int cnt = 0;
        Node* temp = head;
        while(temp!=NULL){
                cnt++;
                if(cnt==(k-1)){
                        Node* x = new Node(el , temp->next);
                        temp->next = x;
                        break;
                }
                temp = temp->next;

        }
        return head;
}

Node* insertBeforeValue(Node* head , int el,int val){
        if(head==NULL){
                return NULL;
        }
        Node* temp = head;
        while(temp->next != NULL){
                if(temp->next->data == val){
                        Node* x = new Node (el,temp->next);
                        temp->next= x; 
                        break;
                }
                temp = temp->next;

        } 
        
        return head;
}



int main(){
        vector<int> arr ={21,4,6,7};     
        Node* head = ConverArr2ll(arr);
        head = insertBeforeValue(head,12,4);
        print(head);
}