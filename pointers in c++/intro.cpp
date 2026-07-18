#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 5;

    cout<<num << endl;

    // address of operator - &
    cout<<"address of num is "<< &num <<endl;
    
    int *ptr = &num;

    //value of *ptr
    cout<<"value is "<< *ptr <<endl;

    // address
    cout<<"adress is "<< ptr <<endl;

    // types of pointers

    double d=1.234;
    double *p=&d;
    cout<<"value is "<< *p <<endl;
    // address
    cout<<"adress is "<< p <<endl;

    cout<<"size of integer is "<< sizeof(num)<<endl;
    cout<<"size of double is "<< sizeof(d)<<endl;
    cout<<"size of pointer is "<< sizeof(ptr)<<endl;

    return 0;

}

