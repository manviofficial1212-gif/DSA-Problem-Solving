// 908. Factorial of a Given Number

#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact =1;
    if (n==0){
        cout<<"the factorial of 0 is 1"<<endl;
    }
    else {
        for (int i=1;i<=n;i++){
            fact =fact*i;
        }
        cout<<"the factorial of "<<n<<" is "<<fact<<endl;
    }
    return 0;
}