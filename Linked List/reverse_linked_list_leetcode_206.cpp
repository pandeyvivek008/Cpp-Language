#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList(){
        head = NULL;
    }

    // Insert at end
    void insertAtEnd(int value){
        Node* newNode = new Node(value);

        if(head == NULL){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Reverse linked list
    void reverseList(){
        Node* previous = NULL;
        Node* current = head;
        Node* next = NULL;

        while(current != NULL){
            next = current->next;
            current->next = previous;

            previous = current;
            current = next;
        }

        head = previous;
    }

    // Print
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main(){
    LinkedList LL;

    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Enter value: ";
        cin >> value;
        LL.insertAtEnd(value);
    }

    cout << "\nOriginal List:\n";
    LL.printLL();

    LL.reverseList();

    cout << "\nReversed List:\n";
    LL.printLL();

    return 0;
}
