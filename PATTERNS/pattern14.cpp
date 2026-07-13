#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n;
    cout<<"enter the no of rows: ";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+col-1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
}