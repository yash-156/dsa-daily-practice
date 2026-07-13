#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    int row=1;
        while(row<=n){
            int col=1;
            while(col<=n-row+1){
                cout<<"*";
                col=col+1;
            }
            cout<<endl;
            row++;
        }
}