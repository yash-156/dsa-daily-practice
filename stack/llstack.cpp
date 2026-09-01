#include <bits/stdc++.h>
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

class Stack {
public:
    Node* top;

    Stack() {
        top = NULL;
    }

    void push(int element) {

        Node* temp = new Node(element);

        temp->next = top;
        top = temp;
    }

    void pop() {

        if(top != NULL) {

            Node* temp = top;
            top = top->next;

            delete temp;
        }
        else {
            cout << "stack underflow" << endl;
        }
    }

    int peek() {

        if(top != NULL) {
            return top->data;
        }
        else {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {

        if(top == NULL) {
            return true;
        }

        return false;
    }
};

int main() {

    Stack st;

    st.push(22);
    st.push(24);
    st.push(26);
    st.push(44);
    st.push(55);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "stack is empty" << endl;
    }
    else {
        cout << "stack is not empty" << endl;
    }

    return 0;
}