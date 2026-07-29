#include<bits/stdc++.h>
using namespace std;

int getSum(int n , int *arr){
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {

    int n;
    cin>>n;

    //creating variable size array

    int *arr=new int[5];
    //taking input

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int ans=getSum(n,arr);

    cout<<"sum of all elements is "<<ans<<endl;;
    
    return 0;
}