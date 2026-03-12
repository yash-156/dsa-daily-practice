#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int>& nums ,int k){
    int n=nums.size();
    k=k%n; // in case k is greater than n

    if(k==0){
        return ;
    }

    int left=0;
    int right=n-1;
    // reverse the whole array
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;

    }
    
    // reverse the first k elements
    left=0;
    right=k-1;
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
    }

    // reverse the remaining n-k elements
    left=k;
    right=n-1;
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    rotate(nums,k);

    for(int num : nums){
        cout << num << " ";
    }
    cout << endl;
}