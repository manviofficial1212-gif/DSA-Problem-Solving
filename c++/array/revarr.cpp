// Reverse an Array
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    int j=n-1;
    for (int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
    cout<<"reversed array is:";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}