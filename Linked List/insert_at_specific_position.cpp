#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Insert at Head
void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Insert at any Position
void insertAtPosition(Node*& head, int value, int pos) {
    // If position = 1, insert at head
    if (pos == 1) {
        insertAtHead(head, value);
        return;
    }

    Node* newNode = new Node(value);
    Node* temp = head;

    // Traverse till (pos-1)th node
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid Position!\n";
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Print Linked List
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertAtPosition(head, 10, 1);  // [10]
    insertAtPosition(head, 20, 2);  // [10 -> 20]
    insertAtPosition(head, 30, 2);  // [10 -> 30 -> 20]
    insertAtPosition(head, 40, 1);  // [40 -> 10 -> 30 -> 20]

    printList(head);

    return 0;
}
