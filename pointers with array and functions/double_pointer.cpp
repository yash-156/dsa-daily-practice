#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<"everything is fine"<<endl;
    
    cout<<"printing the value of p "<<p<<endl;
    cout<<"printing the address of p "<<&p<<endl;

}