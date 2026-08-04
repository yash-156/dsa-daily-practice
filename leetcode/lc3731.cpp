#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int small=*min_element(nums.begin(),nums.end());
        int bigger=*max_element(nums.begin(),nums.end());

        vector<int> ans;
        int index=0;

        for(int i=small; i<=bigger; i++){
            if (index < nums.size() && nums[index] == i) {
                index++;
            } else {
                ans.push_back(i);
            }
        }
        return ans;
    }
};