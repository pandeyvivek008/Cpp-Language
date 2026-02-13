#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class LinkedList {
public:
    ListNode* head;

    LinkedList() {
        head = NULL;
    }

    // Insert at end
    void insertAtEnd(int value) {
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

    // Create cycle manually (for testing)
    void createCycle(int position) {
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

        temp->next = joinNode;  // cycle create
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
                return true;
        }

        return false;
    }
};

int main() {

    LinkedList LL;

    LL.insertAtEnd(10);
    LL.insertAtEnd(20);
    LL.insertAtEnd(30);
    LL.insertAtEnd(40);

    // create cycle at index 1 (value 20)
     LL.createCycle(1);

    Solution obj;

    if(obj.hasCycle(LL.head))
        cout << "Cycle Detected\n";
    else
        cout << "No Cycle\n";

    return 0;
}
