/*

123456
 23456
  3456
   456
    56
     6

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<n-i; k++){
            cout<<(k+i+1);
        }
        cout<<endl;
    }
    return 0;
}