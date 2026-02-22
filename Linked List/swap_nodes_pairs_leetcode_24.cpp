#include <iostream>
using namespace std;

/* Definition for singly-linked list */
struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        // Base case: if 0 or 1 node → no swap needed
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = NULL;

        while(first != NULL && second != NULL){

            // Store next pair starting node
            ListNode* third = second->next;

            // Swap current pair
            second->next = first;
            first->next = third;

            // Connect previous pair with current swapped pair
            if(prev != NULL){
                prev->next = second;
            } else {
                head = second;   // update head after first swap
            }

            // Move pointers for next iteration
            prev = first;
            first = third;

            if(third != NULL){
                second = third->next;
            } else {
                second = NULL;
            }
        }

        return head;
    }
};

// Insert node at end
void insertNode(ListNode* &head, int value) {

    ListNode* newNode = new ListNode;
    newNode->val = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

// Print linked list
void printList(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    ListNode* head = NULL;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for(int i = 0; i < n; i++){
        cin >> value;
        insertNode(head, value);
    }

    Solution obj;
    head = obj.swapPairs(head);

    cout << "List after swapping pairs: ";
    printList(head);

    return 0;
}