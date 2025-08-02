// Title: Implementation of Linked List in CPP 
// __________________________________________________________________________



#include <iostream>
using namespace std;

// Linklist implementation using class
class LinkedList{
    string data;
    LinkedList* address;
    public:

    //setter
    void setter(string data, LinkedList* address){
        this->data = data;
        this->address = address;
    }

    //display the data
    void display(){
        cout<<data<<"->\t";
    }

    //get the next node address
    LinkedList* getNext() {
        return address;
    }
};

int main(){
    //Note: Never skip * in case of pointer
    LinkedList* Head = new LinkedList();
    LinkedList* Second = new LinkedList();
    LinkedList* Third = new LinkedList();
    LinkedList* Fourth = new LinkedList();

    // Note: Never use dot operator to access the setter funtion (in case of pointer only not for objects)
    Head->setter("Aadi",Second);
    Second->setter("Aman",Third);
    Third->setter("Depu",Fourth);
    Fourth->setter("Hash",NULL);

    //For display the data of the Linked list
    LinkedList* temp = Head;
    while (temp != nullptr) {  //nullptr is a predefined keyword (safer than using NULL)
        temp->display();
        temp = temp->getNext();
    }
    cout << "NULL\n"; 

    //free the Heap memory
    delete Head;
    delete Second;
    delete Third;
    delete Fourth;

    return 0;
}