#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data) {

    Node* newNode = new Node(data);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print(Node* head) {

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

bool isCircular(Node* head){
    // empty list

    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }


    if(temp == head){
        return true;
    }

    return false;
}

int main() {

    Node* head = NULL;
    Node* tail = NULL;

    // Creating singly linked list
    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);

    cout << "Linked List: ";
    print(head);

    // Check circular
    if (isCircular(head)) {
        cout << "Linked List is Circular" << endl;
    }
    else {
        cout << "Linked List is NOT Circular" << endl;
    }

    return 0;
}