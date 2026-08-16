#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string color;
    int weight;

    public:

    void bark(){
        cout<<"barkking "<<endl;
    }
};

class Human{

    public:
    string color;

    public:

    void speak(){
        cout<<"speaking "<<endl;
    }
     
};

// multiple inheritence

class hybrid:public Human,public Animal{

};

int main() {

    hybrid obj1;

    obj1.speak();
    obj1.bark(); 

    

    
    
    
    return 0;
}