// Check if the Number is Armstrong

#include <iostream>
using namespace std;
int main (){
    cout<<"enter the number:";
    int n;
    cin>>n;
    int temp =0;
    int original =n;
    while(n!=0){
        int digit = n%10;
        temp =temp + digit*digit*digit;
        n=n/10;
    }
    if(temp==original){
        cout<<"the number is Armstrong";
    }
    else{
        cout<<"the number is not Armstrong";
    }
    return 0;
}