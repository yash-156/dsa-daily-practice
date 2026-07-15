#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    
    cout<<"Select an operation: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"Enter your choice (1-5): ";
    int choice;
    cin>>choice;


    switch(choice){
        case 1:
              cout<<"sum is: "<< num1+num2;
              break;
        case 2:
                cout<<"difference is: "<< num1-num2;
                break;
        case 3:
                cout<<"product is: "<< num1*num2;   
                break;
        case 4:
                if(num2!=0){
                    cout<<"quotient is: "<< num1/num2; 
                }
                else{
                    cout<<"Error: Division by zero is not allowed.";
                }
                break;
        case 5:
                if(num2!=0){
                    cout<<"remainder is: "<< num1%num2; 
                }
                else{
                    cout<<"Error: Division by zero is not allowed.";
                }
                break;
        default:
                cout<<"Invalid choice! Please select a valid operation.";     
                
                
    }
}