// Here we learn all about linkedlist in C++ language basic operations and so on 

#include<bits/stdc++.h>
using namespace std;

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

int lengthOfLL(Node* head){
        int count=0;
        Node* temp = head;

        while(temp){
                // cout<< temp->data << " ";
                temp= temp->next;
                count++;
        }

        return count;
}

int checkIfPresent(Node* head , int val){
        Node* temp = head;

        while(temp){
                if(temp->data == val) return 1;
                temp= temp->next;
        }

        return 0;
}

int main(){
        vector<int> arr ={21,4,6,7};     
        Node* head = ConverArr2ll(arr);
        // cout<< head->data;

        /*  Here Discussed how to travere in linkedlist */ 
        Node* temp = head;

        while(temp){
                // cout<< temp->data << " ";
                temp= temp->next;
        }

        cout<<lengthOfLL(head);
}
