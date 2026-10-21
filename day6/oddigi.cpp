// Count Number of Odd Digits
#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number:";
    int n;
    cin>>n;
    int count =0;
    while (n!=0){
        int digit = n%10;
        if (digit%2!=0){
            count =count +1;
        }
        n=n/10;
    }
    cout<<"Number of odd digits: "<<count<<endl;
    return 0;
}

