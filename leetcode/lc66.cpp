#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        
        //case 1 : digit[n-1] < 9 hai
        if(digits[n-1] < 9) {
        digits[n-1]++;
        return digits;
        }

        //case 2: digit[n-1] == 9 hai
       for(int i=n-1; i>=0; i--){
        if(digits[i]==9){
            digits[i]=0;
        }else{
            digits[i]++;
            return digits;
        }
        }
        // all are 9
        digits.insert(digits.begin(), 1);

      return digits;  
    }
};