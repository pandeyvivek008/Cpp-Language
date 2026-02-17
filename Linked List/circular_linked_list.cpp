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

class circularLinkedList{
    Node* head;
    Node* tail;

    public:
    circularLinkedList(){
        head = tail = NULL;
    }

    void insertAtBeginning(int value){
        Node* newNode = new Node(value);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head; // Point tail to head to make it circular
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head; // Update tail's next to new head
        }
    }

    void insertAtEnd(int value){
        Node * newNode = new Node(value);
        if(head == NULL){
            head = tail = NULL;
            tail->next = head; // Point tail to head to make it circular
        }else{
            newNode->next = head; // Point new node to head
            tail->next = newNode; // Point current tail to new node
            tail = newNode; // Update tail to new node
        }
    }

    void deleteFromBeginning(){
        if(head == NULL) return; // List is empty, nothing to delete
        else if(head == tail){ // Only one node in the list
            delete head;
            head = tail = NULL;
        }else{ // More than one node in the list
            Node* temp = head;;
            head = head->next; // Move head to the next node
            tail->next = head; // Update tail's next to new head
            temp->next = NULL; // Detach the old head node
            delete temp;
        }
    }

    void deleteFromEnd(){
        if(head == NULL) return; // List is empty, nothing to delete
        else if(head == tail){ // Only one node in the list
            delete head;
            head = tail = NULL;
        }else{ // More than one node in the list
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next; // Traverse to the second last node
            }
            tail = prev; // Update tail to second last node
            tail->next = head; // Update tail's next to head
            temp->next = NULL; // Detach the old tail node
            delete temp;
        }
    }

    void printList(){
        if(head == NULL){
            cout<<"List is empty."<<endl;
            return;
        }
        cout<<head->data<<" -> ";
        Node* temp = head->next;
        while(temp != head){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
};

int main(){
    circularLinkedList cll;

    cll.insertAtBeginning(1);
    cll.insertAtBeginning(2);
    cll.insertAtBeginning(3);
    cll.insertAtBeginning(4);
    cll.insertAtBeginning(5);

    cll.insertAtEnd(6);
    cll.insertAtEnd(7);
    cll.insertAtEnd(8);

    cll.deleteFromBeginning();

    cll.printList();

    cll.deleteFromEnd();
    cll.printList();


}