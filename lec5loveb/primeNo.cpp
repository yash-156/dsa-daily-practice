#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<n;i++){
        // rem=0 not a prime number
        if(n%i==0){
            cout<<"Not a prime number";
            isPrime=false;
            
            break;
            
        }

    }   


    if(isPrime==true){
        cout<<"Prime number";
    }else{
        cout<<"Not a prime number";
    }
    
}