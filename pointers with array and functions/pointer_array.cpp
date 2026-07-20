#include<iostream>
using namespace std;

int main() {
    int arr[10]={1,5,4,8};

    cout<<"address of first memeory block is "<<arr<<endl;
    cout<< arr[0] <<endl;
    cout<<"address of first memeory block is "<<&arr[0]<<endl;

    cout<<"value at 0 index is "<<*arr<<endl;
    cout<<"value at 0 index + 1 is "<<*arr+1<<endl;

     cout<<"value at 1 index is "<<*(arr+1)<<endl;

     cout<<3[arr]<<endl;

    return 0;
}