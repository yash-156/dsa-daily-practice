#include<bits/stdc++.h>
using namespace std;

int sum=0;

int arrSum(int num[],int n){
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    for(int i=0;i<size;i++){
        cin>>num[i];

    }

    cout<<"sum of array is "<<arrSum(num,size)<<endl;


}