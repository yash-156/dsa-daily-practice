#include<iostream>
using namespace std;

void count(int n){
    //base case
    if(n==0){
        return ;
    }
    // tail recurion
    cout<<n<<endl;

   //recurssive relation
    count (n-1);
    // head recurion
    cout<<"head recursion"<<endl;
    cout<<n<<endl;

}

int main() {
    int n;
    cin>>n;
cout<<endl;
    count(n);
    
    return 0;
}