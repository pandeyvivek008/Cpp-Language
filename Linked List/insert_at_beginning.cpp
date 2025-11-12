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

void insertAtHead(Node*& head, int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
};

void printList(Node* head){
    while(head != NULL){
        cout<< head->data<<" -> ";
        head = head -> next;
    }
    cout<<"NULL\n";
};

int main(){
    Node* head = NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    printList(head);
    return 0;
}