#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    int j=0;
    vector<string> ans;

    for(int i=1 ; i<=n; i++){
        ans.push_back("Push");
        if(target[j]==i){
            
            j++;

            if(j==target.size()){
                break;
            }
        }else{
            ans.push_back("Pop");
        }
    }
     return ans;   
    }
};