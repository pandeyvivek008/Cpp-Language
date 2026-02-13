#include<iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Insert at end
void insertAtEnd(ListNode*& head, int value) {
    ListNode* newNode = new ListNode(value);

    if(head == NULL) {
        head = newNode;
        return;
    }

    ListNode* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Print list (safe - assumes no cycle)
void printList(ListNode* head) {
    ListNode* temp = head;
    while(temp != NULL) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Create cycle at given position
void createCycle(ListNode* head, int position) {
    if(head == NULL) return;

    ListNode* temp = head;
    ListNode* joinNode = NULL;
    int index = 0;

    while(temp->next != NULL) {
        if(index == position)
            joinNode = temp;

        temp = temp->next;
        index++;
    }

    temp->next = joinNode;  // Cycle create
}

// Detect cycle, remove it, and return starting node
ListNode* detectAndRemoveCycle(ListNode *head) {

    ListNode* slow = head;
    ListNode* fast = head;
    bool isCycle = false;

    // Step 1: Detect cycle
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            isCycle = true;
            break;
        }
    }

    if(!isCycle)
        return NULL;

    // Step 2: Find starting node
    slow = head;
    ListNode* previous = NULL;

    while(slow != fast){
        slow = slow->next;
        previous = fast;
        fast = fast->next;
    }

    // Special case: cycle starts at head
    if(previous == NULL){
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else{
        previous->next = NULL; // remove cycle
    }

    return slow;
}

int main() {

    ListNode* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Original List:\n";
    printList(head);

    // Create cycle
    createCycle(head, 1);
    cout << "\nCycle created at index 1 (value 20)\n";

    // Detect & Remove
    ListNode* result = detectAndRemoveCycle(head);

    if(result != NULL)
        cout << "Cycle detected and removed. It started at node: " 
             << result->val << endl;
    else
        cout << "No cycle detected\n";

    cout << "\nList after removing cycle:\n";
    printList(head);

    return 0;
}
