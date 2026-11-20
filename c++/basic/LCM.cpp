// LCM of Two Numbers
#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    cout<<"enter the first number:";
    int a;
    cin>>a;
    cout<<"enter the second number:";
    int b;
    cin>>b;
    int lcm ;
    for (int i=max(a,b);;i++)
        if (i % a == 0 && i % b == 0) {
        lcm = i;
        break;
    }
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;





return 0;
}