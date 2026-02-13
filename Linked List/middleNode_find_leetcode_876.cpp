#include<iostream>
using namespace std;

class Node{
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

    // Find middle node
    Node* middleNode(){
        if(head == NULL){
            return NULL;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;  // slow middle pe hoga
    }

    // Print Linked List
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

    Node* mid = LL.middleNode();

    if(mid != NULL)
        cout << "\nMiddle Node: " << mid->data << endl;
    else
        cout << "\nList is empty\n";

    return 0;
}
