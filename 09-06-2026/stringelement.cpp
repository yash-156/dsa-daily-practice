#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    void accesscharacters(string s){
        for(int i=0;i<s.length();i++){
            cout<<s[i] << endl;
        }
    }
};

int main(){
    solution obj ;
    string s="hello";
    obj.accesscharacters(s);
    return 0;


}