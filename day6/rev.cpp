// Reverse a Number
#include <iostream>
using namespace std;
int main (){
    cout<<"enter a number:";
    int n;
    cin>>n;
    int temp =0;

    while(n!=0){
        int digit =n%10;
        temp =temp*10+digit;
        n=n/10;
    }
    cout<<"Reversed number is:"<<temp;
    return 0;
}