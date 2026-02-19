#include<iostream>
using namespace std;

// Node structure
class Node{
public:
    int data;          // Node ka data
    Node* next;        // Next pointer
    Node* prev;        // Previous pointer
    Node* child;       // Child pointer

    // Constructor
    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
        child = NULL;
    }
};

class Solution {
public:

    // Function to flatten multilevel list
    Node* flatten(Node* head){

        // Agar list empty hai
        if(head == NULL){
            return head;
        }

        // Traversal pointer
        Node* curr = head;

        // Jab tak list khatam nahi hoti
        while(curr != NULL){

            // Agar current node ka child exist karta hai
            if(curr->child != NULL){

                // Original next ko save kar lo
                Node* nextNode = curr->next;

                // Recursively child list ko flatten karo
                Node* childHead = flatten(curr->child);

                // Current ko child se connect karo
                curr->next = childHead;
                childHead->prev = curr;

                // Child pointer ko NULL karo
                curr->child = NULL;

                // Child list ka tail find karo
                Node* temp = childHead;
                while(temp->next != NULL){
                    temp = temp->next;
                }

                // Tail ko original next se connect karo
                if(nextNode != NULL){
                    temp->next = nextNode;
                    nextNode->prev = temp;
                }
            }

            // Next node par move karo
            curr = curr->next;
        }

        // Head return karo
        return head;
    }
};

// Function to insert node at end (main list)
Node* insertAtEnd(Node* head, int val){

    Node* newNode = new Node(val);

    // Agar list empty hai
    if(head == NULL){
        return newNode;
    }

    Node* temp = head;

    // Last node tak jao
    while(temp->next != NULL){
        temp = temp->next;
    }

    // New node attach karo
    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Function to print list
void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Solution s;

    Node* head = NULL;

    int n, val;

    cout << "Enter number of nodes in main list: ";
    cin >> n;

    // Main list insert karna
    for(int i = 0; i < n; i++){
        cout << "Enter value: ";
        cin >> val;
        head = insertAtEnd(head, val);
    }

    // Child attach karna hai ya nahi
    char choice;
    cout << "Do you want to add child to any node? (y/n): ";
    cin >> choice;

    if(choice == 'y'){

        int parentValue;
        cout << "Enter parent node value: ";
        cin >> parentValue;

        Node* temp = head;

        // Parent node search karo
        while(temp != NULL && temp->data != parentValue){
            temp = temp->next;
        }

        if(temp == NULL){
            cout << "Parent not found!" << endl;
        }
        else{
            int childCount;
            cout << "Enter number of child nodes: ";
            cin >> childCount;

            Node* childHead = NULL;

            for(int i = 0; i < childCount; i++){
                cout << "Enter child value: ";
                cin >> val;
                childHead = insertAtEnd(childHead, val);
            }

            // Child attach karo
            temp->child = childHead;
        }
    }

    cout << "\nOriginal List Flattened:\n";

    Node* flattenedHead = s.flatten(head);

    printList(flattenedHead);

    return 0;
}
