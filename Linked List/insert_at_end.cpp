#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

void insertAtTail(Node*& head, int value){
    Node* newNode = new Node(value);
    if(head == NULL){ // empty list
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp-> next != NULL){ // traverse till last
        temp = temp->next; 
    }
    temp->next = newNode; // link last node to new node
};
void printList(Node* head){
    while(head!= NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL\n";
}
int main(){
    Node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    printList(head);
}
