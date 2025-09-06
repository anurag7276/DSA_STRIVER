/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};



Here : data(val), left(nullptr), right(nullptr) is called an initializer list.
It directly initializes the members at the time of object creation.

*/


/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;       // assignment
        left = nullptr;   // assignment
        right = nullptr;  // assignment
    }
};


⚠️ Slightly less efficient, because:

Members are created with default/garbage values.

Then replaced with new values.

*/


// Initializer list → initialization (happens at object creation).

// Assignment in body → default initialization + reassignment.