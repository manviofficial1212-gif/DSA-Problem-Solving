// Palindrome Number
#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number:";
    int n;
    cin>>n;
    int temp =0;
    int original =n;
    while(n!=0){
        int digit =n%10;
        temp =temp*10+digit;
        n=n/10;
    }
    if(temp==original){
        cout<<"The number is a palindrome.";
    }
    else{
        cout<<"The number is not a palindrome.";
    }
    return 0;
}