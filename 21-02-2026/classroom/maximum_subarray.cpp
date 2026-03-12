#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumsubarray(vector<int>& nums){
    int n=nums.size();
    int current_sum=nums[0];
    int max_sum=nums[0];

    for(int i=1;i<n;i++){
        current_sum=max(nums[i],current_sum+nums[i]);
        max_sum=max(max_sum,current_sum);
    }
    return max_sum;
}

int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};

    cout<<"maximum subaaray sum is: "<<maximumsubarray(nums)<<endl;
    return 0;

}