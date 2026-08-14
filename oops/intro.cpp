#include<iostream>
using namespace std;

class Hero{

    // properties

    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"constructor called"<<endl;
    }

    // parametrised constructor

    Hero(int health){

        cout<<"this -> "<<this<<endl;
        this -> health = health;
    }
    Hero(int health, char level){

        this -> level = level;
        this -> health = health;
    }

    void print(){
        cout<<level<<endl;
    }

    //getter

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //setter

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }


};

int main() {

    // object cretaed statstically

    Hero ramesh(10);
    //cout<<"address of ramesh "<< &ramesh <<endl;
    ramesh.print();


    // dynamically

    Hero *b = new Hero(11);
    b->print();

    Hero temp(22,'B');
    temp.print();















    /*

    // static allocation

    Hero a;

    a.setHealth(80);
    a.setLevel('A');
    
    cout<<"level is "<<a.level <<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    // dynamically 
    Hero *b = new Hero;

    b->setHealth(70);
    b->setLevel('B');
    
    cout<<"level is "<<(*b).level <<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;

    cout<<"level is "<< b->level <<endl;
    cout<<"health is "<< b->getHealth()<<endl;

    
*/

    // creation of object
    
//    Hero ramesh;

//     // use of getter

//     cout<<"health of ramesh is "<<ramesh.getHealth()<<endl;

//     // use of setter

//     ramesh.setHealth(70);

//     // ramesh.health = 70;
//     ramesh.level='A';

//     cout<<"health is "<<ramesh.getHealth() <<endl;
//     cout<<"level is "<<ramesh.level <<endl;

//    // cout<<"size : "<<sizeof(ramesh)<<endl;

    return 0;
}