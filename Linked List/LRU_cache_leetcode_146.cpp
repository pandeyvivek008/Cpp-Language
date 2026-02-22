#include <iostream>
#include <unordered_map>
using namespace std;

class LRUCache {
public:

    // ==============================
    // Doubly Linked List Node
    // ==============================
    class Node {
    public:
        int key, val;      // store key-value pair
        Node* prev;        // pointer to previous node
        Node* next;        // pointer to next node

        // Constructor
        Node(int k, int v){
            key = k;
            val = v;
            prev = next = NULL;
        }
    };

    Node* head;   // Dummy head (Most Recently Used side)
    Node* tail;   // Dummy tail (Least Recently Used side)

    unordered_map<int, Node*> m;  // Hashmap for O(1) lookup
    int limit;                    // Maximum capacity of cache


    // ==============================
    // Constructor
    // ==============================
    LRUCache(int capacity) {

        limit = capacity;

        // Create dummy head and tail
        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        // Connect head and tail
        head->next = tail;
        tail->prev = head;
    }


    // ==============================
    // Insert node at front
    // (Most Recently Used position)
    // ==============================
    void addNode(Node* newNode) {

        Node* oldNext = head->next;  // store current first node

        head->next = newNode;        // head → newNode
        newNode->prev = head;

        newNode->next = oldNext;     // newNode → old first node
        oldNext->prev = newNode;
    }


    // ==============================
    // Remove a node from linked list
    // ==============================
    void delNode(Node* oldNode) {

        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;

        oldPrev->next = oldNext;   // bypass oldNode
        oldNext->prev = oldPrev;
    }


    // ==============================
    // GET operation
    // ==============================
    int get(int key) {

        // If key not found → return -1
        if(m.find(key) == m.end()) {
            return -1;
        }

        Node* node = m[key];
        int ans = node->val;

        // Since accessed → move to front (MRU)
        delNode(node);
        addNode(node);

        return ans;
    }


    // ==============================
    // PUT operation
    // ==============================
    void put(int key, int value) {

        // If key already exists → remove old version
        if(m.find(key) != m.end()){
            Node* oldNode = m[key];
            delNode(oldNode);
            m.erase(key);
        }

        // If cache is full → remove Least Recently Used
        if(m.size() == static_cast<size_t>(limit)){

            Node* lru = tail->prev;   // node before tail = LRU

            m.erase(lru->key);        // remove from map
            delNode(lru);             // remove from list
        }

        // Create new node
        Node* newNode = new Node(key, value);

        // Insert at front (MRU)
        addNode(newNode);

        // Add to map
        m[key] = newNode;
    }


    // ==============================
    // Print cache state (MRU → LRU)
    // ==============================
    void printCache() {

        Node* temp = head->next;

        cout << "Cache State (MRU -> LRU): ";

        while(temp != tail){
            cout << "[" << temp->key << ":" << temp->val << "] ";
            temp = temp->next;
        }

        cout << endl;
    }
};


// =======================================
// MAIN FUNCTION
// =======================================
int main() {

    int capacity;
    cout << "Enter cache capacity: ";
    cin >> capacity;

    // Create LRU Cache object
    LRUCache cache(capacity);

    int choice;

    cout << "\nOperations:\n";
    cout << "1 - put(key, value)\n";
    cout << "2 - get(key)\n";
    cout << "0 - exit\n";

    while(true) {

        cout << "\nEnter operation: ";
        cin >> choice;

        if(choice == 0) break;

        if(choice == 1){

            int key, value;
            cout << "Enter key and value: ";
            cin >> key >> value;

            cache.put(key, value);   // Insert into cache
            cache.printCache();      // Show current state
        }
        else if(choice == 2){

            int key;
            cout << "Enter key: ";
            cin >> key;

            cout << "Value: " << cache.get(key) << endl;
            cache.printCache();
        }
        else{
            cout << "Invalid operation\n";
        }
    }

    return 0;
}