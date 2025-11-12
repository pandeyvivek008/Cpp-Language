#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

//Insert at End(for creating list)
void insertAtEnd(Node*& head, int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

//Delete at Beginning
void deleteAtHead(Node*& head){
    if(head == NULL){
        cout<<"List is empty!\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

//Delete at End
void deleteAtEnd(Node*& head){
    if(head == NULL){
        cout<<"List is enpty!\n";
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}

//Delete at Specific Position
void deleteAtPosition(Node*& head, int pos){
    if(head == NULL){
        cout<<"List is empty!\n";
        return;
    }
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    for(int i=1; i<pos-1 && temp!=NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        cout<<"Invalid Position!\n";
        return;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

//Print List
void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head= head->next;
    }
    cout<<"NULL\n";
}

//Main Function
int main(){
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout<<"Original List: ";
    printList(head);

    deleteAtHead(head);
    cout<<"After deleting head: ";
    printList(head);

    deleteAtEnd(head);
    cout<<"After deleting end: ";
    printList(head);

    deleteAtPosition(head, 2);
    cout<<"After deleting position 2: ";
    printList(head);
}