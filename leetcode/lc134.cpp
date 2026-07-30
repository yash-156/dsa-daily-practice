#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int start=0;
        int tank =0;
        int total=0;

        for(int i=0; i<n; i++){
            int diff=gas[i]-cost[i];

            tank+=diff;
            total+=diff;

            if(tank<0){
                // if rached i and fail then it means the stations came till now will also fail so start with i+1;
                start=i+1;  
                tank=0;
            }
        }

        if(total<0){
            return -1;
        }
        return start;  
    }
};