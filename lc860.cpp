#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int count5=0,count10=0,count20=0;

        for(int i=0; i<n; i++){
            if(bills[i]==5){
                count5++;

            }else if(bills[i]==10){
                if(count5>0){
                    count5--;
                    count10++;
                }else{
                    return false;
                }
            }else{
                //if i==20 and available coins are of 5 and 10 
                if(count5>0 && count10>0){
                    count5--;
                    count10--;
                    count20++;
                }else{
                //only coins of 5 are available
                if(count5>=3){
                    count5-=3;
                    count20++;
                }else{
                    return false;
                }
                }
            }
        }
        return true;
        
    }
};