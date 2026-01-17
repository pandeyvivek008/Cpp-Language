#include<iostream>
#include<vector>
using namespace std;

//Node Structure
class Node {
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data1, Node* next1) {
        data=data1;
        next=next1;
    }
    Node(int data1){
            data=data1;
            next=nullptr;
        
    }
};

//Convert Array to Linked List
Node* convertArr2LL(vector<int> & arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(size_t i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

//Length of Linked List
int lengthOfLL(Node* head){
    int count=0;
    Node* temp = head; //traverse in LL
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

//Check if a value is present in Linked List
int chekIfPresent(Node* head, int val){
    Node* temp = head; //traverse in LL
    while(temp){
        if(temp->data == val) return 1;
            temp = temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr = {12,5,8,7};
    Node* head = convertArr2LL(arr);
    cout<<head->data<<"\n"<<endl;
    Node* temp = head; //traverse in LL
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\nLength of Linked List is: "<<lengthOfLL(head)<<endl;

    cout<<"Is present in Linked List Yes or Not: "<<chekIfPresent(head, 8)<<endl;
}