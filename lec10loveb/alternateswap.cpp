#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void alterswap(int arr[],int size){
    for(int i=0;i<size;i+2){
        if(i+1<size){
      swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int arr[8]={2,1,4,3,6,5,8,7};

    cout<<"hello";

    printarr(arr,8);

    alterswap(arr,8);
    

    return 0;

        
}