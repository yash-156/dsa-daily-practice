#include<bits/stdc++.h>
using namespace std;

int isPosition(int arr[],int n,int target){
    int start=0;
    int end=n-1;

    while(start<end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==target){
            return mid;
        }
        if(target<arr[mid]){
            end=mid;
            return mid-1;
        }
        if(target>arr[mid]){
            start=mid+1;
            return mid+1;
        }


    }
return -1;

}

int main(){
    int nums[4]={1,3,5,6};
    int target=2;

    isPosition(nums,4,2);

    
}