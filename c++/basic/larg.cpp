// Return the Largest Digit in a Number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int large =0;
    while(n!=0){
        int digit = n%10;
        if (digit>large){
            large = digit;
        }
        n = n/10;
    }
    cout<<"The largest digit is: "<<large<<endl;
    return 0;
}