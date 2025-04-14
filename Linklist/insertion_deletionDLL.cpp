#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    public:
      Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
 
     }
};

Node* convertArr2DLL(vector<int>&arr){
        Node* head = new Node(arr[0]);
        Node* prev = head;
        for(int i=1; i<arr.size(); i++){
            Node* newNode = new Node(arr[i]);
            prev->next = newNode;
            newNode->back = prev;
            prev = newNode;
        }
        return head;

}

void printDLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next==NULL ) return NULL;
        Node* prev = head;
         Node* head = head->next;

        head->back = nullptr;
        prev->next = nullptr;
        delete prev;
        return head;  
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next==NULL ) return NULL;
        Node* prev = head;
        while(prev->next != NULL){
            prev = prev->next;
        }
        Node* tail = prev;
        prev->back->next = nullptr;
        tail->back = nullptr;
        delete tail;
        return head;  
}

Node* removeKthElement(Node* head, int k){
        if(head==NULL) return NULL;
        int cnt = 0;
        Node* KNode = head;
        while(KNode !=NULL){
                cnt++;
                if(cnt == k) break;
                KNode = KNode->next;
        }
        Node* prev = KNode->back;
        Node* front = KNode->next;

        if(prev == NULL && front == NULL){
            return NULL;
        }
        else if(prev == NULL){
            return deleteHead(head);
        }
        else if(front == NULL){
            return deleteTail(head);
        }
        prev->next = front;
        front->back = prev;
        KNode->next = nullptr;
        KNode->back = nullptr;
        delete KNode;
        return head;
           
}

void deleteNode(Node*temp){
        Node* prev = temp->back;
        Node* front = temp->next;
        if(front==NULL){
                prev->next = nullptr;
                temp->back = nullptr;
                delete temp;
                return;
        }

        prev->next = front;
        front->back = prev;
        temp->next = nullptr;
        temp->back = nullptr;
        free(temp);
}

// ****************************INSERTION in  DLL*********************************************

Node* insertBeforeHead(Node* head, int val){
        Node* newNode = new Node(val, head, nullptr);
        head->back = newNode;
        return newNode;
}

Node* insertBeforeTail(Node* head, int val){
        if(head->next == NULL){
           return insertBeforeHead(head, val);
        }
        Node*  tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }
        Node* prev = tail;
        Node* newNode = new Node(val, tail, prev);
        prev->next = newNode;
        tail->back = newNode;
        return head;
                     
}

Node* insertBeforeKthElement(Node* head, int k, int val){
        if(k==1){
                return insertBeforeHead(head, val);
        }
        Node* temp = head;
        int cnt = 0;
        while(temp != NULL){
                cnt++;
                if(cnt == k) break;
                temp = temp->next;
        }
        Node* prev = temp->back;
        Node* newNode = new Node(val, temp, prev);
        prev->next = newNode;
        temp->back = newNode;
        return head;
}

void insertBeforeNode(Node* node, int val{
        Node* prev = node->back;
        Node* newNode = new Node(val, node, prev);
        prev->next = newNode;
        node->back = newNode;
        return;
}

