#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=n-1;j>=0;j--){
                
                if(nums[i]>nums[j]){
                    count ++;
                    
                }
                
            }
            
            ans.push_back(count);


        }
        return ans;
        
    }
};