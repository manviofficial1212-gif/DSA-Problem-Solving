//     A
//    ABA
//   ABCBA
//  ABCDCBA
#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<4;i++){
        for (int j=0;j<4-i;j++)
        cout<<" ";
        for (int j=0;j<i+1;j++){
            cout<<char(65+j);
        }
        for (int j=0;j<i;j++){
            cout<<char(65+i-j-1);
        }
        cout<<endl;
    }
    return 0;
}