#include <iostream>
using namespace std;

// Linklist implementation using class
class LinkedList{
    string data;
    LinkedList* address;
    public:

    //getter
    void getter(string data, LinkedList* address){
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

    // Note: Never use dot operator to access the getter funtion (in case of pointer only not for objects)
    Head->getter("Aadi",Second);
    Second->getter("Aman",Third);
    Third->getter("Depu",Fourth);
    Fourth->getter("Hash",NULL);


    //For display the data of the Linked list
    LinkedList* temp = Head;
    while (temp != nullptr) {  //nullptr is a predefined keyword (safer than using NULL)
        temp->display();
        temp = temp->getNext();
    }

    return 0;
}