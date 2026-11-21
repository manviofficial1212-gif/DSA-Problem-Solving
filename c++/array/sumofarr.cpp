// Sum of Array Elements
#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"the sum of array elements is:"<<sum;
    return 0;
}