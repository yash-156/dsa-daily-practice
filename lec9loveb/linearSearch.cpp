#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size,int key){

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
     return 0;
}

int main(){
    int arr[10]={1,2,3,-1,-2,-4,-6,-8,7,9};

    cout<<"enter the key to search "<<endl;

    int key;
    cin>>key;

    bool found=linearSearch(arr,10,key);

    if(found){
        cout<<" key is present"<<endl;

    }else{
        cout<<" key is absent"<<endl;
    }

    return 0;
    

}