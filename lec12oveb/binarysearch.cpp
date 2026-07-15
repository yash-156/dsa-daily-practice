#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}


int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,18};

    int evenindex=binarySearch(even,8,1);
    cout<<"index is "<<evenindex<<endl;
    int oddindex=binarySearch(even,8,18);
    cout<<"index is "<<oddindex<<endl;

    return 0;
}
