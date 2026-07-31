#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(); 
        //map for frequency calculation
        unordered_map<int ,int> mp;
        for(int nu:nums){
            mp[nu]++;
        }

        //sort with highest value in map

        vector<pair<int,int>> freq(mp.begin(),mp.end());

        sort(freq.begin(),freq.end(),[](auto &a, auto &b){
        return a.second > b.second;
        });

        //insert key from map having highest value 

        int ans;
        for(int i=0; i<1; i++){
            ans=(freq[i].first);
        }

        return ans;
        
    }
};