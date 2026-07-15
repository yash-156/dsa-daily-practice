#include<bits/stdc++.h>
using namespace std;

void arrayIntersection(int arr1[], int n, int arr2[], int m){

    int i = 0, j = 0;

    while(i < n && j < m){

        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){

    int arr1[4] = {1,2,3,3};
    int arr2[3] = {2,3,4};

    arrayIntersection(arr1,4,arr2,3);

    return 0;
}