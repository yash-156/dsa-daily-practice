#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    int count='A';
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch=count;
            cout<<ch;
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row++;
    }
}