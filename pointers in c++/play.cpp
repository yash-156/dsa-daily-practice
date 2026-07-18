#include<bits/stdc++.h>
using namespace std;

int main() {

    //int *p;
    // cout<< *p <<endl;


    int i=5;
    int *k=&i;
    cout<< k <<endl;
    cout<< *k <<endl;

    int *p=0;
    p=&i;

    cout<< p <<endl;
    cout<< *p <<endl;

    int num=5;
    int a=num;
    cout<<"a before "<< num <<endl;
    a++;
    cout<<"a after "<< num <<endl;

    int *p2=&num;
    cout<<"before "<< num <<endl;

    (*p2)++;
    cout<<"after "<< num <<endl;

    int *q=p2;

    cout<< p2 <<" - "<< q <<endl;
    cout<< *p2 <<" - "<< *q <<endl;
    
    return 0;
}