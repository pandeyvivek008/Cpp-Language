#include <iostream>
using namespace std;

/* Definition for singly-linked list */
struct ListNode {
    int val;
    ListNode *next;
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        // Step 1: Check if at least k nodes exist
        ListNode* temp = head;
        int cnt = 0;

        while(cnt < k){
            if(temp == NULL){
                return head;  // less than k nodes → no reverse
            }
            temp = temp->next;
            cnt++;
        }

        // Step 2: Recursively reverse remaining list
        ListNode* prevNode = reverseKGroup(temp, k);

        // Step 3: Reverse current k nodes
        temp = head;
        cnt = 0;

        while(cnt < k){
            ListNode* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            cnt++;
        }

        return prevNode;
    }
};

// Insert node at end
void insertNode(ListNode* &head, int value) {
    
    // Manually create node
    ListNode* newNode = new ListNode;
    newNode->val = value;
    newNode->next = NULL;

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

// Print linked list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = NULL;
    int n, value, k;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for(int i = 0; i < n; i++) {
        cin >> value;
        insertNode(head, value);
    }

    cout << "Enter k: ";
    cin >> k;

    Solution obj;
    head = obj.reverseKGroup(head, k);

    cout << "Reversed List in k-group: ";
    printList(head);

    return 0;
}