// Find All Divisors of a Number

#include <iostream>
using namespace std;
int main (){
    cout <<"enter the number:";
    int n;
    cin>>n;
    cout<<"Divisors of "<<n<<" are: ";
    for (int i=1;i<=n;i++){
        if (n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}