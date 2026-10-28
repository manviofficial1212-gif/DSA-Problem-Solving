// Count of Prime Numbers till N
#include <iostream>
using namespace std;
int main () {
    cout<<"enter the number:";
    int n;
    cin>>n;
    int count =0;
    for (int i=2;i<=n;i++){
        bool prime = true;
        for (int j=2;j<i;j++){
            if (i%j==0){
                prime = false;
                break;
            }
        }
        if (prime) {
            count++;
        }
    }
    cout << "Count of prime numbers till " << n << " is: " << count << endl;
    return 0;
}