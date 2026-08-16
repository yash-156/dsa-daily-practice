#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    string color;
    int weight;

    public:

    void speak(){
        cout<<"speaking "<<endl;
    }
};

class Dog:public Animal{


};

class germanShephard:public Dog{

};


int main() {

    germanShephard g;
    g.speak();

    // Dog d;
    // d.speak();
    // cout<<d.age<<endl;
    
    
    
    return 0;
}