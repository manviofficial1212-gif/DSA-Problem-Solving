// Check for Perfect Number

#include <iostream>
using namespace std;
int main (){
    cout<<"enter the number:";
    int n;
    cin>>n;
    int temp =0;
    for (int i =1;i<n;i++){
        if (n%i==0){
            temp =temp +i;
        }
        
    }
    if(temp==n){
        cout<<"the number is Perfect";
    }
    else{
        cout<<"the number is not Perfect";
    }
    return 0;
}