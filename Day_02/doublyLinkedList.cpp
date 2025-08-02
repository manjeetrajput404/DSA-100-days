#include <iostream>
using namespace std;

// Structure (using class not structure in cpp) of doubly linked list
class Node {
    int data;
    Node* prev;
    Node* next;

public:
    Node(int data) {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }

    // getters/setters in accessing from outside
    friend class DoublyLinkedList;
};

class DoublyLinkedList {
    Node* Head = nullptr; // Make sure it's declared here as a proper member

public:
    void insertFront(int val) {
        Node* newNode = new Node(val);

        if (Head != nullptr) {
            Head->prev = newNode;
            newNode->next = Head;
        }

        Head = newNode;
    }

    void display() {
        Node* temp = Head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.insertFront(10);
    list.insertFront(20);
    list.insertFront(30);

    list.display(); // Should print: 30 20 10

    return 0;
}
