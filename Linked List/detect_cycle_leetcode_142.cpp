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

// Detect cycle and return starting node
ListNode* detectCycle(ListNode *head) {

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

    // Step 2: Find starting node of cycle
    slow = head;
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

int main() {

    ListNode* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    // Create cycle at index 1 (20)
    createCycle(head, 1);

    ListNode* result = detectCycle(head);

    if(result != NULL)
        cout << "Cycle starts at node with value: " << result->val << endl;
    else
        cout << "No cycle detected" << endl;

    return 0;
}
