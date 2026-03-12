// Problem: Two Sum
// Platform: LeetCode
// Approach: Using unordered_map (Hashing)
// Time Complexity: O(n)
// Space Complexity: O(n)



#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twosum(vector<int>& nums, int target){
   unordered_map<int,int> map;

        for(int i=0; i< nums.size(); i++){

            int needed = target - nums[i];

            if(map.find(needed)!=map.end()){
                return {map[needed],i};
            }

        
        map[nums[i]]=i;
        }
        return {};
}

int main(){
    vector<int> nums={2,7,11,15};
    int target=9;

    vector<int> result = twosum(nums, target);

    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}

