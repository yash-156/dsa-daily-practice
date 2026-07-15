#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<< endl;
}

void sort(int arr[],int n){
    int left=0;
    int right=n-1;

    while(left<right){
        if(arr[left]==0){
            left++;
        }else if(arr[right]==1){
            right--;
        }else{
            swap(arr[left],arr[right]);
        }
    }
}

int main(){
    int arr[80]={1,0,0,1,0,1,0,1};

    sort(arr,80);
    printarray(arr,80);


}