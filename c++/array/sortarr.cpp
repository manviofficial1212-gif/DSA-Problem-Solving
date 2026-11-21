// Check if the Array Is Sorted
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool sort =true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sort = false;
            break;
        }
    }
    if (sort ==true){
        cout<<"the array is sorted";
    }
    else{
        cout<<"the array is not sorted";
    }
    return 0;
}