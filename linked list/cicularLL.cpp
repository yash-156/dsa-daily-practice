#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;

    }

    // destrutor
    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }

        cout<<"memory is free for the node with data "<< value <<endl;
    }
    
};

void insertNode(Node* &tail, int element, int d){
    // list is empty
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }else{
        // non empty list
        // assuming the element is presnt in the list

        Node* curr = tail;

        while(curr -> data != element){
            curr = curr -> next;
        }

        // element found --> current is represting element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
   
    do{
        cout<< tail -> data <<" ";
        tail = tail-> next;
    }while(tail != temp);
    cout<<endl;

     
}

void deleteNode(Node* &tail, int d){

    // empty list
    if(tail == NULL){
        cout<<"list is empty , pls check again"<<endl;
        return;

    }else{
        // non empty list 
        // assumin that value is present in the list 

        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != d){
            prev = curr;
            curr = curr -> next;

        }
        prev -> next = curr -> next;

        // 1 node linked list
        if(curr == prev){
            tail = NULL;
        }

        // >=2 node LL
        if(tail == curr){
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

int main() {

    Node* tail = NULL;
    
    // empty list mei insert kr rhe hai

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    // insertNode(tail,5,7);
    // print(tail);

    // insertNode(tail,7,9);
    // print(tail);

    // insertNode(tail,5,6);
    // print(tail);

    // insertNode(tail,5,3);
    // print(tail);

    // insertNode(tail,6,52);
    // print(tail);

    // insertNode(tail,9,10);
    // print(tail);


    // deleteNode(tail,10);
    // print(tail);

    // deleteNode(tail,3);
    // print(tail);

    deleteNode(tail,3);
    print(tail);


    return 0;
}