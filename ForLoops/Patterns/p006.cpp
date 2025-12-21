/*

5 5 5 5 5
4 4 4 4 
3 3 3 
2 2 
1

*/

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<(n-i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}