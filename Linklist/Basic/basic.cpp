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

int main(){
        int arr[]={2,4,6,7};
        // Node y =  Node (arr[0], nullptr);
        // cout << y.next;                  // this is correct when y is object or variable 

         Node* y = new Node (arr[0], nullptr); // here y is a pointer which point to Node datatype
         cout << y->data;
         
}
