// Count of Odd Numbers in Array
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
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    cout<<"the count of odd numbers in array is:"<<count;
    return 0;
}