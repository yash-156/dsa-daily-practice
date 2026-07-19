#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n=s.length();
        string ans="";

        for(int i=0; i<n; i++){
            if(s[i]==y){
                ans+=s[i];
            }
        }    
        for(int i=0; i<n; i++){
            if(s[i]!=y && s[i]!=x){
                ans+=s[i];
            }
        }    
        for(int i=0; i<n; i++){
            if(s[i]==x){
                ans+=s[i];
            }
        }
    return ans;
    }
};