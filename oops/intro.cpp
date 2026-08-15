#include<bits/stdc++.h>
using namespace std;

class Hero{

    // properties

    private:
    int health;

    public:
    char *name;
    char level;
    static int timetocomplete;

    Hero(){
        cout<<"DEAFULT constructor called"<<endl;
        name = new char[100];
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

    // copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);

        this-> name = ch;


        cout<<"copy constructor called"<<endl;

        this -> health = temp.health;
        this -> level = temp.level;
    }


    void print(){

        cout<<endl;

        cout<<"[ Name: "<<this -> name<<" ,";
        
        cout<<"health "<< this->health <<" ,";
        cout<<"level "<< this->level <<" ]";

        cout<< endl;

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

    void setName(char name[]){
        strcpy(this-> name, name);
    }

    // static function

    static int random(){
        return timetocomplete ;
    }

    // destructor
    ~Hero(){
        cout<<"destructor called"<<endl;

    }


};

int Hero :: timetocomplete = 5;

int main() {

    //cout<< Hero::timetocomplete<<endl;
    cout<< Hero::random()<<endl;

    // Hero a;
    // cout<<a.timetocomplete<<endl;

    // Hero b;
    // b.timetocomplete=10;
    // cout<<a.timetocomplete<<endl;
    // cout<<b.timetocomplete<<endl;



    // // static 

    // Hero a;

    // // dynamic

    // Hero *b = new Hero();\
    // // manually called destructr
    // delete b;






//     Hero Hero1;

//     Hero1.setHealth(50);
//     Hero1.setLevel('D');
//     char name[10]="kumar";
//     Hero1.setName(name);

//    // Hero1.print();


//     // use default copy constructor

//     Hero Hero2(Hero1);
//    // Hero2.print();

//     // Hero hero2 = hero1;
//     Hero1.name[0]='G';
//     Hero1.print();

//     Hero2.print();


//     Hero1=Hero2; 

//     Hero1.print();
//     Hero2.print();








    // Hero suresh(70,'C');
    // suresh.print();

    // Hero ritesh(suresh);

    // ritesh.print();


    // // object cretaed statstically

    // Hero ramesh(10);
    // //cout<<"address of ramesh "<< &ramesh <<endl;
    // ramesh.print();


    // // dynamically

    // Hero *b = new Hero(11);
    // b->print();

    // Hero temp(22,'B');
    // temp.print();









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