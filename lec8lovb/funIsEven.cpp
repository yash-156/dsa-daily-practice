#include<bits/stdc++.h>
using namespace std;

// 1- true
// 0--false

bool isEven(int a){
/*
    if(a&1){
        return 0;
    }
        */
    if(a%2==0){
        return 1;
    }

    return 0;
}

int main(){
    int num1;
    cin>>num1;
    if (isEven(num1)){
    cout<<"number is even ";
    }
    else{
        cout<<"number is odd ";
    }
    return 0;
    
}