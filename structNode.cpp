#include <iostream>
using namespace std;


// Define a Node structure
struct Node {
    char data;       // Data field
    Node* next;     // Pointer to the next node
};

    cout << "/n Welcome to My Linked List! \n";

    // Create a string named myStr
    string myStr = "abcDefg"

    // test our struct
    // create a pointer named head
    Node* pHead = nullptr;

    // create a new node named node
    Node* pNew = new Node();
    pNew->data = myStr[0];
    pNew->next = nullptr;

    // Output what is in our node
    cout << "\n output of data and next:\n";
    cout << pNew->data << endl;
    cout << pNew->next << endl;

    // The linked list
    pHead = pNew;

    // Verify this with output
    cout << "\n output of the node that pHead is pointing to\n";
    cout << pHead->data << endl;
    cout << pHead->next << endl;

    // Add a node to our linked list using our four steps
    // Create a new node
    pNew = newNode();
    // Fill the data field
    pNew->data = myStr[1];
    pNew->next = nullptr;
    // Attach new node to head of list
    pNew->next = pHead;



    // output our linked list:
    cout << "\n The linked list\n";

    cout << "\n The current linked list: \n";
    cout << pHead->data << endl;
    cout << pHead->next->data << endl;

    cout << "\n End of the list!";


    return 0;
}