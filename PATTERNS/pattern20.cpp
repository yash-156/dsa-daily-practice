#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;

    int row=1;
    while(row<=n){
        //print spaces
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //print stars
        int col=1;
        while(col<=row){
            cout<<"*";
            
            col=col+1;
        }
        cout<<endl;
        row++;
    }
}