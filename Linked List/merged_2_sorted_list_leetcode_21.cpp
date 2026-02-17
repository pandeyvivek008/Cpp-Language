#include<iostream>
using namespace std;

// Node structure
struct ListNode {
    int val;            // Data
    ListNode *next;     // Next pointer

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Insert at end (sorted insert manually kar rahe hain)
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

// Print list
void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Merge Two Sorted Lists (Recursive)
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    // Base case:
    // Agar koi list khatam ho gayi
    if(list1 == NULL || list2 == NULL){
        return (list1 == NULL) ? list2 : list1;
    }

    // Compare values
    if(list1->val <= list2->val){

        // list1 chhota hai
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else{

        // list2 chhota hai
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

int main() {

    ListNode* list1 = NULL;
    ListNode* list2 = NULL;

    // First sorted list
    insertAtEnd(list1, 1);
    insertAtEnd(list1, 3);
    insertAtEnd(list1, 5);

    // Second sorted list
    insertAtEnd(list2, 2);
    insertAtEnd(list2, 4);
    insertAtEnd(list2, 6);

    cout << "List 1:\n";
    printList(list1);

    cout << "List 2:\n";
    printList(list2);

    // Merge
    ListNode* mergedList = mergeTwoLists(list1, list2);

    cout << "\nMerged List:\n";
    printList(mergedList);

    return 0;
}
