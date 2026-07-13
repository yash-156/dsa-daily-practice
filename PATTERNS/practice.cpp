#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int row=1;
        while(row<=n){

            //space print
            int space=n-row;
            while(space){
                cout<<" ";
                space--;

            }
            //stars 1st traingle
            int col=1;
            while(col<=row){
                cout<<"*";
                col++;
            }
            cout<<endl;
            row++;
        }
    }
   
