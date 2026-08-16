#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"hello yash kumar"<<endl;
    }

    int sayHello(string name, int n){
        cout<<"hello yash kumar"<<endl;
        return n;
    }

    void sayHello(string name){
        cout<<"hello yash "<< name <<endl;
    }
};

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this ->a;
        int value2 = obj.a;

        cout<<"output "<< value2 - value1 <<endl; 
    }

};

int main() {


    B obj1,obj2;
    obj1.a = 4;
    obj2.a = 5;

    obj1 + obj2;

    
    // A obj;
    // obj.sayHello();
    
    return 0;
}