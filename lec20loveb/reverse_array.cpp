#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i:v){
        cout<<i<<endl;
    }
}

int main(){
    vector<int> m;
    

    m.push_back(11);
    m.push_back(7);
    m.push_back(3);
    m.push_back(12);
    m.push_back(4);

    vector<int> ans=reverse(m);
    print(ans);

    return 0;

    

}