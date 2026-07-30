#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int lastpos=n-1;

        if(n==1){
            return true;
        }

        for(int i=n-2; i>=0; i--){

            if(nums[i]+i>=lastpos){
                lastpos=i;
            }
            
        }
        return lastpos==0;
    }
};