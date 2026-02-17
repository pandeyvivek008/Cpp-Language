#include<iostream>
using namespace std;

 class Node{
        public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

class DoublyLinkedList {
    Node* head;
    Node* tail;

    public:
    DoublyLinkedList(){
        head = tail = NULL;
    }

    void insertAtBeginning(int value){
        Node* newNode = new Node(value);

        if(head == NULL){
            head = tail = newNode;
        }else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteFromBeginning(){
        if(head == NULL){
            cout<<"List is empty, nothing to delete."<<endl;
            return;
        } 
        Node* temp = head;

        head = head->next;
        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void deleteFromEnd(){
        if(head == NULL){
            cout<<"List is empty, nothing to delete."<<endl;
            return;
        }
        Node* temp = tail;

        tail = tail->prev;
        if(tail != NULL){
            tail->next = NULL;
        }
        temp->prev = NULL;
        delete temp;
    }

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<" <=> ";
            temp = temp->next;
        }
        cout<<"NULL\n"<<endl;
    }
};


int main(){
   DoublyLinkedList dll;

   dll.insertAtBeginning(10);
   dll.insertAtBeginning(20);
   dll.insertAtBeginning(30);

   dll.insertAtEnd(1);
   dll.insertAtEnd(2);
   dll.insertAtEnd(3);
   dll.insertAtEnd(4);

   dll.deleteFromBeginning();

   dll.deleteFromEnd();
   dll.printList();

   
   
}